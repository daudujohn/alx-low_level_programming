#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
