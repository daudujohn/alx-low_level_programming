#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
int i;
int length = sizeof(str);
int half = length / 2;
if (length % 2 == 1)
{
half += 1;
}
for (i = half; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
