#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated
 * concatenated string,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len1 = 0, len2 = 0, i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
concatenated = malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
{
return (NULL);
}
for (; i < len1; i++)
{
concatenated[i] = s1[i];
}
for (; j < len2; j++)
{
concatenated[i + j] = s2[j];
}
concatenated[i + j] = '\0';
return (concatenated);
}
