#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
listint_t *current; /* Pointer to traverse the list */

while (head != NULL)
{
current = head;   /* Store the current node in a temporary variable */
head = head->next; /* Move to the next node */
free(current);     /* Free the memory of the current node */
}
}
