#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: The number to print the times table for
 */
void print_times_table(int n)
{
int row, column, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column == 0)
{
printf("%2d", product);
}
else
{
printf(", %2d", product);
}
}
printf("\n");
}
}
}


