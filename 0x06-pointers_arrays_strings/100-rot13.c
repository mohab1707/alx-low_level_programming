#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptr = str;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*ptr)
{
int i = 0;
int found = 0;
while (alphabet[i])
{
if (*ptr == alphabet[i])
{
*ptr = rot13[i];
found = 1;
break;
}
i++;
}
if (!found)
{
ptr++;
continue;
}
ptr++;
}
return (str);
}
