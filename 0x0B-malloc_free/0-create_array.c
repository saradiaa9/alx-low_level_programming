#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a specific character
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
if (size == 0)
{
return (NULL);
}

unsigned int i;
arr = malloc(sizeof(char) * size);

if (arr == NULL)
{
return (NULL);
}

for ( i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
