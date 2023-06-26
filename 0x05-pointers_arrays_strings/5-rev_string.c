#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
int length = sizeof(s);
int i = 0;
int j = length;

while (i < j)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
