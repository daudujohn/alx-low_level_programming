#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: string
 * Return: lenght of string.
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
