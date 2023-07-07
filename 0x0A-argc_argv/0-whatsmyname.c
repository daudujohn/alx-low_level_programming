#include <stdio.h>
#include <main.h>

using namespace std;
/*
 * print_program_name - prints the name of a program
 * 
 * @argc: number of parameters
 * @argv: pointer of array of pointers
 * Returns: void
 * /
 
int print_program_name(int argc, char **argv)
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
