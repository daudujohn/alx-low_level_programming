#include <stdio.h>
#include "_putchar"

int main() {
  char str[] = "_putchar";
  int i;

  for (i = 0; i < sizeof(str) - 1; i++) {
    _putchar(str[i]);
  }

  _putchar('\n');

  return (0);
}
