#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: number of parameters
 * @argv: Pointer of array of pointers
 * Return: void
 */
int main(int argc, char *argv[])
{
int i;
int sum;
for (i = 0; i < argc; i++)
{
sum++;
}
printf("%s", sum);
printf("\n");
}

