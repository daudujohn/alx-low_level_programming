#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - see code
 * @ac: arguement count
 * @av: arguements
 * Return: char
 */

char *argstostr(int ac, char **av)
{
int total_length;
char *new_str;
int index;
int i;
int j;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 1;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}

new_str = malloc(total_length *sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
index = 0;
for (i = 0; i < ac; i++)
{
length = strlen(av[i]);
for (j = 0; j < length; j++)
{
new_str[index++] = av[i][j];
}
new_str[index++] = '\n';
}

new_str[index] = '\0';
return (new_str);
}
