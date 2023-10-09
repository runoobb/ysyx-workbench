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

WP wp_pool[NR_WP] = {};

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr = NULL;
    wp_pool[i].preval = 0;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(char* hold)
{
  assert(hold != NULL);
  assert(free_ != NULL);
  bool trace_flag = true;
  word_t result = expr(hold, &trace_flag);
  if(!trace_flag){
    printf("Parse Failed\n");
    return NULL;
  }
  WP* flag = head;
  if(head == NULL)
  {
    head = wp_pool;
    assert(wp_pool != NULL);
    free_ = wp_pool[0].next;
    wp_pool[0].next = NULL;
    strcpy(head -> expr, hold);
    head -> preval = result;
    return head;
  }
  else
  {
    while(flag -> next != NULL){
      flag = flag -> next;
    }
    flag -> next = free_;
    free_ = free_ -> next; 
    flag -> next -> next = NULL;
    strcpy(flag -> next -> expr, hold);
    flag -> next -> preval = result;
    return flag -> next;
  }
}

void free_wp(WP* wp)
{
  WP* tmp = head;
  if(wp == head){
    head = wp->next;
  }
  else{
    while(tmp->next != wp){
      tmp = tmp->next;
    }
    tmp->next = wp->next;
  }
  wp->next = free_;
  wp->expr = NULL;
  wp->preval = 0;
  free_ = wp;
  return;
}
