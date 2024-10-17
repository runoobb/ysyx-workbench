#include <unistd.h>
#include <stdio.h>

int main() {
  write(1, "Hello World!\n", 13);

  // Q: Why only first malloc() invoke sbrk() twice
  char *ptr0;
  ptr0 = (char *)malloc(4);
  // char *ptr1;
  // ptr1 = (char *)malloc(4);
  
  printf("Hello World from Navy-apps\n");
  return 0;
}
