#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - see code
 * @s1: first string
 * @s2: second string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
int i;
int length1;
int length2;
int total_length;
char *new_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

length1 = strlen(s1);
length2 = strlen(s2);
total_length = length1 + length2 + 1;

new_str = malloc(total_length *sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < length1; i++)
{
new_str[i] = s1[i];
}

for (i = 0; i < length2; i++)
{
new_str[i + length1] = s2[i];
}
new_str[total_length - 1] = '\0';

return (new_str);
}
