#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/* Other declarations and includes specific to your header */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


int _putchar(char c);  /* Prototype for the _putchar function */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

/* More declarations specific to your header */

#endif /* LISTS_H */