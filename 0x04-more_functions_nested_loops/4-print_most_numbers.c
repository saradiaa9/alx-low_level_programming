#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, except for 2 and 4,
 *                      followed by a new line
 *
 * Return: void
 */
/**
 * print_most_numbers - Print numbers from 0 to 9, followed by a newline,
 *                      but skip 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4) /* skip 2 and 4 */
_putchar(i + '0'); /* convert integer to corresponding character and print */
}

_putchar('\n'); /* start a new line */
}
