#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; j++)
{
int i;
for (i = 97; i < 123;  i++)
{
char c = i;
_putchar(c);
}
_putchar('\n');
}
}
