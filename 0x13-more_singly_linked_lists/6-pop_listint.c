#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return (0); /* Return 0 if the list is empty */

temp = *head; /* Store the current head node in a temporary variable */
*head = (*head)->next; /* Update the head to the next node */
data = temp->n; /* Get the data (n) from the deleted node */
free(temp); /* Free the memory of the deleted node */

return (data); /* Return the data (n) of the deleted node */
}
