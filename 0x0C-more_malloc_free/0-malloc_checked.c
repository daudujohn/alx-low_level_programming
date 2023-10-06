#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  see code
 * @b: size of memory to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == 0)
{
exit(98);
}
return (ptr);
}
