#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
{
return (h);
}
haystack = h + 1;
}
return (char *)0;
}
