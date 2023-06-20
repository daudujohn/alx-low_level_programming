#include <stdio.h>

/**
 * print_sign - see code
 *
 * @n: The character to check.
 * Return: 1 if the character is positive, -1 if negative, 0 otherwise
 
 */

int print_sign(int n)
{
if (n > 0)
{
_putchars('+');
return (1);
}
else if (n == 0)
{
_putchars('0');
return (0);
}
else
{
_putchars('-');
return (-1);
}
}
