#include "main.h"

/**
 * sqrt_recursive - Helper function
 * to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root
 * if it exists, or -1 if not.
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (sqrt_recursive(n, guess + 1));
}
/**
 * _sqrt_recursion - Returns the
 * natural square root of a number.
 * @n: The number to calculate the
 * square root of.
 *
 * Return: The natural square 
 * root if it exists, or -1 if not.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt_recursive(n, 0));
}
