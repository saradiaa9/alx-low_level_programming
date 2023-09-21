#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> // Include the necessary header for size_t if not already included

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}
list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

/* Add other function prototypes here if needed */

#endif /* LISTS_H */

