#include "main.h"

/**
 * int_index - see code
 * @array: array of type int
 * @size: size of array
 * @cmp: function with argument int and no return
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
