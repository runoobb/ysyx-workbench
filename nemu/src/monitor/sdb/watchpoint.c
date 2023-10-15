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

#include "sdb.h"
#include <watchpoint.h>

#define NR_WP 32

static WP *head = NULL, *free_ = NULL;

static WP wp_pool[NR_WP] = {};

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr = (char*) calloc(32, sizeof(char));
    wp_pool[i].preval = 0;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char* hold)
{
  assert(hold != NULL);
  assert(free_ != NULL);
  bool trace_flag = true;
  word_t result = expr(hold, &trace_flag);
  if(!trace_flag){
    printf("Parse Failed\n");
    return; 
  }
  WP* flag = head;
  if(head == NULL)
  {
    head = wp_pool;
    assert(wp_pool != NULL);
    free_ = head -> next;
    head -> next = NULL;
    strcpy(head -> expr, hold);
    head -> preval = result;
    Log("Watchpoint %d set up\n", head->NO);
    return;
  }
  else
  {
    while(flag -> next != NULL){
      flag = flag -> next;
      assert(flag != NULL);
    }
    flag -> next = free_;
    free_ = free_ -> next; 
    flag -> next -> next = NULL;
    strcpy(flag -> next -> expr, hold);
    flag -> next -> preval = result;
    Log("Watchpoint %d set up\n", flag -> next -> NO);
    return;
  }
}

void free_wp(int ord)
{
  WP* tmp = head;
  if(head == NULL){
    Log("Watchpoint %d unset, del failed\n", ord);
    return;
  }
  WP* wp = wp_pool + ord;
  if(wp == head){
    head = wp->next;
  }
  else{
    while(tmp->next != wp && tmp->next != NULL){
      tmp = tmp->next;
    }
    if(tmp->next == NULL){
      Log("Watchpoint %d unset, del failed\n", ord);
      return;
    }
    tmp->next = wp->next;
  }
  wp->next = free_;
  wp->expr = NULL;
  wp->preval = 0;
  free_ = wp;
  Log("del success\n");
  return;
}

void wp_display()
{
  if(head == NULL)
    Log("No Watchpoint\n");
  else
  {
    WP* tmp = head;
    while(tmp != NULL)
    {
      Log("Watchpoint %d:    %s\n", tmp->NO, tmp->expr);
      tmp = tmp->next;
    }
  }
  return;
}

bool scan_wp()
{
  bool ret_flag = false;
  if(head == NULL)
    return false;
  else
  {
    WP* tmp = head;
    word_t wp_tmp_val = 0;
    while(tmp != NULL)
    {
      bool trace_flag = true;
      wp_tmp_val = expr(tmp->expr, &trace_flag);
      if(wp_tmp_val != tmp->preval){
        Log("Watchpoint %d : %d -> %d\n", tmp->NO, tmp->preval, wp_tmp_val);
        tmp->preval = wp_tmp_val;
        ret_flag = true;
      }
      tmp = tmp -> next;
    }
  }
  return ret_flag;
}
