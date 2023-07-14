#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _memcpy - see code
 * @dest: destination
 * @src: source
 * @n: size of memory
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

/**
 * _realloc - see code
 * @ptr: pointer to be changed
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr2;

if (old_size == new_size)
{
return (ptr);
}
if (ptr == NULL)
{
ptr2 = malloc(new_size);
if (ptr2 == 0)
{
return (0);
}
free(ptr);
return (ptr2);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}

ptr2 = malloc(new_size);
if (ptr2 == 0)
{
return (0);
}
_memcpy(ptr2, ptr, old_size);
free(ptr);
return (ptr2);
}
