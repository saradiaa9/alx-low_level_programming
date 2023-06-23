#include "main.h"


/**
 * print_diagonal-Draws a diagonal line on the terminal using the '\' character
 *
 * @n: The number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
{
if (i == j)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
