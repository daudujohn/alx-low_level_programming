#include "main.h"

/**
 * sqrt2 - see code
 * @a: integer
 * @b: 1 to n
 *
 * Return: int
 */
int sqrt2(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - see code
 * @n: Number Integer
 *
 * Return: ropriately.
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
