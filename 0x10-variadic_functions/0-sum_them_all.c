#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: number of variables
 * @...: varidadic arguments
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list args;
sum = 0;
num = 0;

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
sum = sum + num;
}
va_end(args);
return (sum);
}
