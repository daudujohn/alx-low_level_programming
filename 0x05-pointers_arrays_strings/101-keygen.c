#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 * Return: 0
 */

int main(void)
{
int length = 8;
char password[length];
int character;

srand(time(NULL));

for (int i = 0; i < length; i++)
{
character = rand() % 94 + 33;
password[i] = character;
}

printf("%s\n", password);

return (0);
}
