#include <stdio.h>
#include "main.h"

int main() {
  char str[] = "_putchar";
  int i;

  for (i = 0; i < (int)(sizeof(str) - 1); i++) {
    _putchar(str[i]);
  }

  _putchar('\n');

  return (0);
}
