#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (*head == NULL)
return (-1); /* Return -1 if the list is empty */

if (index == 0)
{
/* Delete the head node */
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; current != NULL && i < index - 1; i++)
{
current = current->next; /* Traverse to the node before the desired index */
}

if (current == NULL || current->next == NULL)
return (-1); /* Unable to delete at the desired index; return -1 */

temp = current->next;
current->next = temp->next;
free(temp);
return (1); /* Successfully deleted the node at the specified index */
}
