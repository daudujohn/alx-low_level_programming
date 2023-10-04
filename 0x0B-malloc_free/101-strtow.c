#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * strtow - see code
 * @str: string to be split
 * Return: char
 */

char **strtow(char *str)
{
char **words;
int word_count;
int i;
char *current_word;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}

word_count = 0;
current_word = str;
while (*current_word != '\0')
{
if (*current_word == ' ')
{
word_count++;
}
current_word++;
}

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
return (NULL);
}

i = 0;
current_word = str;
while (*current_word != '\0')
{
if (*current_word == ' ')
{
words[i++] = current_word + 1;
}
current_word++;
}

words[i] = NULL;
return (words);
}
