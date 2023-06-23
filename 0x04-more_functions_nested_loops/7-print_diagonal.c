#include "main.h"
/**
 * print_diagonal - Draw a diagonal line in the terminal with the character '\'.
 *                  Print a newline character at the end of the line.
 *
 * @n: Number of times to print the character '\'
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0) /* if n is 0 or less, print only newline */
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}
}
