#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first matching element, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}

return (-1);
}
