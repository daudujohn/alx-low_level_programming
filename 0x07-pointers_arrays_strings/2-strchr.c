#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of the
 * character in s
 * @s: memory area
 * @c: constant byte b
 *
 * Return: On success 1, else -1
 */
char *_strchr(char *s, char c)
{
int l, i;
l = 0;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i <= l; i++, s++)
{
if (*s == c)
{
return (s);
}
}
return (0);
}
