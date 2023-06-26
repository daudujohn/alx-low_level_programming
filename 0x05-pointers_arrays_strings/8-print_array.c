#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: string to be printed
 * @n: end number of letters
 * Return: void
 */

void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
