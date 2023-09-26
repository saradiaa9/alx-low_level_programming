#include <stdlib.h>
#include <string.h> /* for memset */
#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated and initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

/* Check for zero nmemb or size */
if (nmemb == 0 || size == 0)
return (NULL);

/* Allocate memory using malloc */
ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Initialize the allocated memory to zero using memset */
memset(ptr, 0, nmemb * size);

return (ptr); /* Return the pointer to the allocated and initialized memory */
}
