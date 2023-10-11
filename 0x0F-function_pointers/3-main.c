#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - see code
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: int
 */
int main(int argc, char **argv)
{
int res;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n"), exit(98);
}

if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
{
printf("Error\n"), exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
{
printf("Error\n"), exit(100);
}

func = get_op_func(argv[2]);
res = func(atoi(argv[1]), atoi(argv[3]));
printf("%i\n", res);
return (0);
}
