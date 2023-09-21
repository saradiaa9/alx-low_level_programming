#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0; /* Initialize a count to keep track of nodes */

while (h != NULL)
{
count++;     /* Increment the count for each node */
h = h->next; /* Move to the next node */
}

return count; /* Return the total count of nodes */
}
