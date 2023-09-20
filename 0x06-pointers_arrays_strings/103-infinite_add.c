#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result or 0 if the result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0, j = 0, k = 0;
int digit1, digit2, sum, digit_sum;
while (i < size_r - 1 && (n1[i] != '\0' || n2[j] != '\0' || carry != 0))
{
digit1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
digit2 = (n2[j] != '\0') ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
digit_sum = sum % 10;
if (k + 1 < size_r)
{
r[k++] = digit_sum + '0';
}
if (n1[i] != '\0')
{
i++;
}
if (n2[j] != '\0')
{
j++;
}
}
if (k < size_r - 1)
{
r[k] = '\0';
return (r);
}
return (0);
}
