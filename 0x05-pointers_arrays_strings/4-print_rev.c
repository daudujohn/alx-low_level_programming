#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
int i = _strlen(s) - 1;
while(i >= 0)
{
_putchar(*s[i]);
i--;
}
_putchar('\n');
}
