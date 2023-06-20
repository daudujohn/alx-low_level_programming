#include <stdio.h>
#include "main.h"

int main() {
  char str[] = "_putchar";

  for (int i = 0; i < sizeof(str) - 1; i++) {
    _putchar(str[i]);
  }

  _putchar('\n');

  return (0);
}
