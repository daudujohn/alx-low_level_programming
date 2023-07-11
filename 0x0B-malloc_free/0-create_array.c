#include <stdlib.h>

/**
 * create_array - see code
 * @size: size of the array
 * @c: initializing character
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
int i;
char *arr;
arr = (int)malloc(size * sizeof(char));
if (arr != NULL)
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
return (NULL);
}
