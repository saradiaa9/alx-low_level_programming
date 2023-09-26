#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t node_count = 0; /* To keep track of the number of nodes */

while (h != NULL)
{
node_count++;   /* Increment the node count */
h = h->next;    /* Move to the next node */
}

return (node_count);
}
