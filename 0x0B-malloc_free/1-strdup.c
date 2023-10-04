#include <stdlib.h>
#include "main.h"

/**
 * _strdup - see code
 * @str: string to be duplicated
 * 
 * Return: char
 */

char *_strdup(char *str) {
int length;
char *new_str;
int i;
length = 1;
while(*str != '\n')
{
length++;
}
new_str = malloc(length * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++) {
new_str[i] = str[i];
}
return (new_str);
}
