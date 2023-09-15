#include <stdio.h>
#include <math.h>
/**
 * Test
 */
int main(void)
{
long number = 612852475143;
long largest_prime = -1;
long divisor = 2;
while (number != 1)
{
if (number % divisor == 0)
{
largest_prime = divisor;
number /= divisor;
}
else
{
divisor++;
}
}
printf("%ld\n", largest_prime);
return (0);
}
