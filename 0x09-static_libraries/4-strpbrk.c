#include "main.h"

/**
 * _strpbrk - see code
 *
 * @s: string
 * @accept: bytes to search
 *
 * Return: @s if pass else 0
 */
char *_strpbrk(char *s, char *accept)
{
int l, l2, i, j;
l = 0, l2 = 0;
while (s[l] != '\0')
{
l++;
}
while (accept[l2] != '\0')
{
l2++;
}
for (i = 0; i < l; i++, s++)
{
for (j = 0; j < l2; j++)
{
if (*s == *(accept + j))
{
return (s);
}
}
}
return (0);
}
