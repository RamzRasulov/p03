#include <stdio.h>

void hello(void) { printf("Hello!\n"); }

int main(void) {
  printf("Start\n");

  hello();

  printf("Finish\n");

  hello();

  printf("End\n");

  return 0;
}