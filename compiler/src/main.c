#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <test.h>

void check() { printf("%s\n", "Include ok!"); }

int main(void) {
  check();
  printf("%s\n", "All ok!");
  return EXIT_SUCCESS;
}
