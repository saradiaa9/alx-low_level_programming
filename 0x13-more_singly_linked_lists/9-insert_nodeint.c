#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL); /* Return NULL if memory allocation fails */

new_node->n = n; /* Set the data value of the new node */

if (idx == 0)
{
/* Insert at the beginning (new head) */
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
for (i = 0; current != NULL && i < idx - 1; i++)
{
current = current->next; /* Traverse to the node before the desired index */
}

if (current == NULL || i < idx - 1)
{
/* Unable to insert at the desired index; clean up and return NULL */
free(new_node);
return (NULL);
}

/* Insert the new node at the desired index */
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
