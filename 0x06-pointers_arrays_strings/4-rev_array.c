#include "main.h"

/**
 * reverse_array - see code
 * @a: array to be reversed
 * @n: length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
int temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
