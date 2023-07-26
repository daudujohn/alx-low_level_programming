#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - see code
 * @separator: String to be separate numbers
 * @n: number
 * @...: variadic arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str)
{
printf("%s", str)
}
else
{
printf("NULL");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
