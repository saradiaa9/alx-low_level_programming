#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int comma = 0;  /* flag to indicate whether to print comma and space */

while (i < 100)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');

comma = (i != 99);  /* set flag to 1 except for last pair */

putchar(comma * ',');
putchar(comma * ' ');

i++;
}


return (0);
}
