#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int isDigitString(const char *str)
{
 while (*str)
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}
void multiply(const char *num1, const char *num2)
int len1;
int len2;
int len_result;
int *result;
int i,j,product,sum,nonZeroIndex;
{
if (!isDigitString(num1) || !isDigitString(num2))
{
printf("Error\n");
exit(98);
}
len1 = strlen(num1);
len2 = strlen(num2);
len_result = len1 + len2;
*result = calloc(len_result, sizeof(int));
if (result == NULL)
{
printf("Error\n");
exit(98);
}
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0');
sum = product + result[i + j + 1];
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}
nonZeroIndex = 0;
while (nonZeroIndex < len_result - 1 && result[nonZeroIndex] == 0)
{
nonZeroIndex++;
}
for (; nonZeroIndex < len_result; nonZeroIndex++)
{
printf("%d", result[nonZeroIndex]);
}
printf("\n");
free(result);
}
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
multiply(argv[1], argv[2]);
return (0);
}
