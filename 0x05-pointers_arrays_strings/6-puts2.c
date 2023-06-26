#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
int i;
while (*str != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
