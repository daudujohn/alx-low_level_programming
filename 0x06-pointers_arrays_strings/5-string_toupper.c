#include "main.h"

/**
 * string_toupper - see code
 * @s: string to be changed to uppercase
 * Return: char
 */

char *string_toupper(char *s)
{
int i;
i = 0;
while(s[i] != '\0')
{
s[i] = s[i] - 32;
}
return (s);
}
