#include <stdio.h>

/**
 * print_last_digit - see code
 *
 * @c: The character to check.
 * Return: val
 *
 */

int print_last_digit(int c)
{
int val = c % 10;
putchar('%d', val);
return (val);
}
