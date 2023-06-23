#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9, followed by a newline
 *
 * Return: void
 */
void print_numbers(void)
{
int i;
char num_char;

for (i = 0; i < 10; i++)
{
num_char = i + '0'; /* convert integer to corresponding character */
_putchar(num_char);
}

_putchar('\n'); /* start a new line */
}
