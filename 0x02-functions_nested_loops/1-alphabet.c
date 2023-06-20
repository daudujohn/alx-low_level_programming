#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code.
 *
 * Return: Void
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 123;  i++)
{
char c = i;
_putchar(c);
}
_putchar('\n');
}
