#include "main.h"
/**
 * print_most_numbers - Print numbers from 0 to 9, followed by a newline,
 *                      but skip 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
    int i;
    char num_char;

    for (i = 0; i < 10; i++)
    {
        if (i == 2 || i == 4) /* skip 2 and 4 */
            continue;

        num_char = i + '0'; /* convert integer to corresponding character */
        _putchar(num_char);
    }

    _putchar('\n'); /* start a new line */
}
