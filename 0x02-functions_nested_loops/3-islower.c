#include <stdio.h>

/**
 * _islower - checks if a character is in lowercase
 *
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 *
 * This function checks whether a character is lowercase.
 *
 * The ASCII code for lowercase letters is between 97 and 122.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
