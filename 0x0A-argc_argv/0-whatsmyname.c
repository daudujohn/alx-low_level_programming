#include <stdio.h>

/**
 * main - prints the name of a program
 * 
 * @argc: number of parameters
 * @argv: pointer to an array of pointers
 * Return: 0
 */
 
int main(int argc, char **argv)
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
