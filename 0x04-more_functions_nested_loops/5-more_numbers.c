#include "main.h"
/**
 * more_numbers - Print 10 times the numbers 0 to 14 followed by a newline.
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
char num_char;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10) /* for numbers 10 to 14 */
{
num_char = j / 10 + '0';
_putchar(num_char);
}

num_char = j % 10 + '0';
_putchar(num_char);
}

_putchar('\n');
}
}
