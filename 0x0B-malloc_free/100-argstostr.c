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
int *new_str;
int i;
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
new_str[0] = '\0';
for (i = 0; i < ac; i++)
{
strcat(new_str, av[i]);
strcat(new_str, "\n");
}
return (new_str);
}
