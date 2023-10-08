#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from
 * min to max
 * @min: The minimum value (included) for the array
 * @max: The maximum value (included) for the array
 *
 * Return: A pointer to the newly created array
 *         NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min++;
}
return (arr);
}
