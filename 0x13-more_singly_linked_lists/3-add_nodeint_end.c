#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *current;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Set the data value of the new node */
new_node->n = n;
new_node->next = NULL; /* The new node will be the last one, so its next should be NULL */

if (*head == NULL)
{
/* If the list is empty, make the new node the head */
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next; /* Traverse to the current last node */
}
current->next = new_node; /* Update the last node's next to point to the new node */
}

return (new_node); /* Return the address of the new element */
}
