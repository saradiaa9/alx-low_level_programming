#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the program terminates with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b); /* Allocate memory using malloc */

if (ptr == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(98); /* Terminate the program with status 98 */
}

return (ptr); /* Return the allocated memory pointer */
}
