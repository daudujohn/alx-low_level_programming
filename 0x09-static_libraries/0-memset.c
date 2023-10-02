#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte b
 * @n: first n bytes of memory area pointed by s
 *
 * Return: if successful 1, else -1.
 * /
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++, s++)
{
*s = b;
s = s - n;
}
return (s);
}
