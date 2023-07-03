#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area destination
 * @src: memory area source
 * @n: n bytes of memory area to be copied
 *
 * Return: 1 if pass, else -1
 * /
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++, dest++, src++)
{
*dest = *src;
dest = dest - n;
return (dest);
}
}
