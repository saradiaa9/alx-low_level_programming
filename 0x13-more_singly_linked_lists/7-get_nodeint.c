#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to retrieve (starting at 0).
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0; /* Initialize a counter for the current node position */

while (head != NULL)
{
if (i == index)
return (head); /* Return the current node when index matches */

head = head->next; /* Move to the next node */
i++; /* Increment the position counter */
}

return (NULL); /* Return NULL if the node does not exist at the given index */
}
