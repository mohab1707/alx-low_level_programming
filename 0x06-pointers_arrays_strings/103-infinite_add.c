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
int len1 = 0, len2 = 0;
int carry = 0;
int i, j, k;
int digit1, digit2, sum, digit_sum;
while (n1[len1])
{
len1++;
}
while (n2[len2])
{
len2++;
}
if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return (0);
}
i = len1 - 1;
j = len2 - 1;
k = 0;
r[size_r] = '\0';
while (i >= 0 || j >= 0 || carry)
{
digit1 = (i >= 0) ? n1[i] - '0' : 0;
digit2 = (j >= 0) ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
digit_sum = sum % 10;
r[k] = digit_sum + '0';
i--;
j--;
k++;
}
for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
return (r);
}
