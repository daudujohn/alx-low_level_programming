#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 * @dest: copy destination
 * @src: copy source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src != '\0')
{
*p++ = *src++;
}

*p = '\0';

return (dest);
}
