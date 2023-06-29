#include "main.h"

/**
 * _strncpy - copies n bytes of one string to another
 * @dest: string destination
 * @src: string source
 * @n: n bytes to be copied
 *
 * Return: on success 1, else -1.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, k;

i = 0;
while (src[i] != '\0')
{
i++;
}
for (k = 0; k < n; k++)
{
if (k < i)
{
dest[k] = src[k];
}
else if (k >= i)
{
dest[k] = 0;
}
}
return (dest);
}
