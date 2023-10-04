#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words
 * in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0, i, in_word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (str[i] == ' ')
{
in_word = 0;
}
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings
 * (words), or NULL on failure.
 */
char **strtow(char *str)
{
int i, j, k, word_count = 0, len = 0;
char **words;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
word_count = count_words(str);
if (word_count == 0)
{
return (NULL);
}
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
for (i = 0; i < word_count; i++)
{
while (*str == ' ')
{
str++;
}
for (len = 0; str[len] != ' ' && str[len] != '\0'; len++)
{
;
}
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(words[k]);
}
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
{
words[i][j] = str[j];
}
words[i][j] = '\0';
str += len;
}
words[word_count] = NULL;
return (words);
}
