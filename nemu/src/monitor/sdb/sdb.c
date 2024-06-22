/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>
#include <ctype.h>
#include <watchpoint.h>
#include <trace.h>

static int is_batch_mode = false;

void init_regex();

#ifndef CONFIG_WATCHPOINT
static void fail_msg()
{
  Log("Watchpoint disabled.\n");
  return;
}
#endif

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int cmd_p(char *args);

static int cmd_w(char *args);

static int cmd_d(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "'Call: si N' Execute N instuctions and then halt", cmd_si},
  { "info", "'Call info arg' Print the info of regs or watchpoints, arg r for regs, arg w for watchpoints", cmd_info},
  { "x", "'Call: x N EXPR' Evaluate EXPR as the base address and print the contiguous N 4 bytes memory", cmd_x},
  { "p", "'Call: p REGEX' Evaluate the value of Regex Expression", cmd_p},
  { "w", "'Call: w EXPR' Stop program when the value of EXPR is changed (Config in the menuconfig before use)", cmd_w},
  { "d", "'Call: d WP_NUM' Del Number WP_NUM watchpoint (Sync with w)", cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  if(arg == NULL){
    cpu_exec(1);
    return 0;
  }
  int step = atoi(arg);
  if(!step)
    printf("no instruction is executed\n");
  else
    cpu_exec(step);
  return 0;
}
 
static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");

  if(arg == NULL){
    printf("another arg required\n");
  }

  else{
    switch(arg[0]){
      case 'r':
        isa_reg_display();
        break;
      case 'w':
        wp_display();
        break;
    }
  }
  return 0;
}

static int cmd_x(char *args){
  char *arg = strtok(NULL, " ");
  int byte_num = atoi(arg);
  char *addr = strtok(NULL, " ");
  paddr_t addr_val;
  sscanf(addr, "%x", &addr_val);
  word_t temp;
  for(int i = 0; i < byte_num; i++)
  {
    temp = paddr_read(addr_val + 4*i, 4);
    printf("%x\n", temp);
    printf("test_start*******\n");
    for(int j = 0; j < 4; j++)
    {
      temp = paddr_read(addr_val + 4*i + j, 1);
      printf("%x ", temp);
    }
    printf("\n");
    printf("test_end*******\n");
  }
  return 0;
}

static int cmd_p(char *args)
{
  bool trace_flag = true;
  word_t result = expr(args, &trace_flag);
  if(!trace_flag)
    printf("Parse Failed\n");
  else
    printf("eval to %d(decimal)\n", result);

  return 0;
}


static int cmd_w(char *args)
{
  IFNDEF(CONFIG_WATCHPOINT, fail_msg());
  IFDEF(CONFIG_WATCHPOINT, new_wp(args));
  return 0; 
}

static int cmd_d(char *args)
{
  IFNDEF(CONFIG_WATCHPOINT, fail_msg());
  IFDEF(CONFIG_WATCHPOINT, free_wp(atoi(args)));
  return 0;  
}
    
void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  #ifdef CONFIG_WATCHPOINT
  init_wp_pool();
  #endif

  /* Intialize the iringbuf*/
  init_iringbuf();
}
