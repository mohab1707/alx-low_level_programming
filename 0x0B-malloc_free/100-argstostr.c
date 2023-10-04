#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into
 * a single string
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: pointer to the concatenated string,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[len] = '\0';
return (str);
}
