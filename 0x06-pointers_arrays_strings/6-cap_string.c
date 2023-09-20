#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int new_word = 1;
char *ptr = str;
while (*ptr)
{
if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr -= ('a' - 'A');
new_word = 0;
}
else if (is_separator(*ptr) == 0)
{
new_word = 1;
}
else
{
new_word = 0;
}
ptr++;
}
return (str);
}
