#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of variadic arguments
 * @...: Arguments Variadic
 *
 * Return: No return
 */

void print_strings(const char *separator, const unsigned int n, ...) {
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);

if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}

if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
