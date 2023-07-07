#include <stdio.h>


/**
 * main - Entry point
 *
 * @argc: number of parameters
 * @argv: Pointer of array of pointers
 * Return: 0 if success, else 1
 */
int main(int argc, char **argv)
{
int n, ex;
ex = 0;
if (argc != 3)
{
printf("%s\n", "Error");
ex = 1;
}
else
{
n = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", n);
}
return (ex);
}
