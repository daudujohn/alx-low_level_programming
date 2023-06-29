#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @*dest: destination string
 * @*src: source string
 * 
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, dest_len, src_len;

dest_len = sizeof(dest) / sizeof(char);
src_len = sizeof(src) / sizeof(char);

for (i = dest_len; i < dest_len + src_len; i++)
{
dest[i] = src[i - dest_len];
}

dest[i] = '\0';

return dest;
}
