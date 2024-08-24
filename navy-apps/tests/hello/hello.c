#include <unistd.h>
#include <stdio.h>

int main() {
  write(1, "Hello World!\n", 13);
  int i = 2;
  volatile int j = 0;
  // while (1) {
  //   j ++;
  //   if (j == 100000) {
  //     printf("Hello World from Navy-apps for the %dth time!\n", i ++);
  //     j = 0;
  //   }
  // }
  char *ptr0;
  ptr0 = (char *)malloc(2);
  char *ptr1;
  ptr1 = (char *)malloc(2);
  char *ptr2;
  ptr2 = (char *)malloc(4);
  // printf("Hello World from Navy-apps for the %dth time!\n", i);
  return 0;
}
