#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
char c = (char)i;
_putchar(c);
i = (int)i;
}
_putchar('\n');
}
