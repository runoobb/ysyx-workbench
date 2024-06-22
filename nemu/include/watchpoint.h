#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include <common.h>
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char* expr;
  word_t preval;
}WP;

void init_wp_pool();
void new_wp(char* hold);
void free_wp(int ord);
void wp_display();
bool scan_wp();
void free_all_wp();

#endif
