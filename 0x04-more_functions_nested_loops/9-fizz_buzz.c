#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - check the code
 *
 * Return: void
 */

void fizz_buzz(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
_putchar('\n');
}
}
