#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;

/* Check if min is greater than max */
if (min > max)
return (NULL);

/* Calculate the size of the array */
size = max - min + 1;

/* Allocate memory for the array */
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
{
arr[i] = min++;
}

return (arr); /* Return the pointer to the newly created array */
}
