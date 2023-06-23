#include "main.h"

/**
 * print_square - Prints a square using the '#' character
 *
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

for (int i = 1; i <= size; i++)
{

_putchar('#');
_putchar('\n');
}
}
