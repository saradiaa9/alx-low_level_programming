#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
listint_t *current; /* Pointer to traverse the list */

while (*head != NULL)
{
current = *head;    /* Store the current node in a temporary variable */
*head = (*head)->next; /* Move the head to the next node */
free(current);       /* Free the memory of the current node */
}
}
