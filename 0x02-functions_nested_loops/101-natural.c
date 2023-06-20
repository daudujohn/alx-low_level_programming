#include <stdio.h>
#include "main.h"

/**
 * main - see code
 *
 * Return: sum.
 */

int main(void)
{
int i = 0;
int sum = 0;
for (i = 0; i < 1024; i++)
{
if((i % 3) == 0 || (i % 5) == 0)
{
sum = sum + i;
printf("%d\n", i);
}
}
return sum;
}
