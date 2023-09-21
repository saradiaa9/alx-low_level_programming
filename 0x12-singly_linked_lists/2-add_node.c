#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element (node), or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
return (NULL);

list_t *new_node = malloc(sizeof(list_t)); /* Allocate memory for the new node */

if (new_node == NULL)
return (NULL); /* Return NULL if malloc fails */

new_node->str = strdup(str); /* Duplicate and store the string */

if (new_node->str == NULL)
{
free(new_node);
return (NULL); /* Return NULL if strdup fails */
}

new_node->len = strlen(str); /* Calculate the length of the string */
new_node->next = *head; /* Set the next pointer to the current head */
*head = new_node; /* Update the head to point to the new node */

return (new_node); /* Return the address of the new element */
}

