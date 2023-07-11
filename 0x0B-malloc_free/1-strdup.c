#include <stdlib.h>
#include <main.h>

/**
 * _strdup - see code
 * @str: string to be duplicated
 * 
 * Return: char
 */

char *_strdup(char *str) {
int length;
char *new_str;
length = strlen(str) + 1;
new_str = malloc(length * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (new_str == NULL)
{
return (NULL);
}
for (int i = 0; i < length; i++) {
new_str[i] = str[i];
}
return (new_str);
}
