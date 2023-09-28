#include "main.h"
#include <stdio.h>

/**
 * str_len_recursive - Helper
 * function to calculate the length
 * of a string recursively.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int str_len_recursive(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + str_len_recursive(s + 1));
}
/**
 * is_palindrome_recursive - Helper
 * function to check if a string
 * is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: true if the string
 * is a palindrome, false otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
 return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - Determines
 * if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string
 * is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = str_len_recursive(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
