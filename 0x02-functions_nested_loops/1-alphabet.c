#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet()
{
int i;
for(i = 97; i < 123;  i++){
char c = i;
_putchar(c);
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
