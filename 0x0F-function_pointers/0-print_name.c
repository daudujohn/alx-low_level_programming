#include "main.h"

/**
 * print_name - see code
 * @name: String
 * @f: Pointer to function with char parameter and no return
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != 0)
{
f(name);
}
}
