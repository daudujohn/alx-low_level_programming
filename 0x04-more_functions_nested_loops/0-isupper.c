#include "main.h"

/*
 * _isupper - see code
 * @c: letter to be checked
 * Return: if upper 1, else 0
 *
 * This code checks for an uppercase character
 */

int _isupper(int c)
{
if (c >= 'A' || c <= 'Z')
{
return (1);
}
return (0);
}
