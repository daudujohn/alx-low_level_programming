#include <stdio.h>

/**
 * print_sign - see code
 *
 * @n: The character to check.
 * Return: 9 times table
 
 */

void times_table(void)
{
int i = 0;
for (i = 0; i < 11; i++)
{
int j = 0;
for (j = 0; j < 11; j++)
{
int prod = i * j;
putchar(prod);
putchar(',');
putchar(' ');
}
}
}
