#include <stdio.h>

void hello(void) { printf("Hello!\n"); }

void bye(void) { printf("Bye!\n"); }

int main(void) {
  printf("Start\n");
  hello();
  bye();
  printf("Finish\n");
  return 0;
}