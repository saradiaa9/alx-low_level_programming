#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int abs_int(int n)
{
if (n == INT_MIN)
return abs(n + 1) + 1;
else
return abs(n);
}
int print_last_digit(int n)
{
int last_digit;

/* Compute the last digit by taking the remainder of n divided by 10 */
last_digit = abs_int(n) % 10;

/* Print the last digit */
_putchar(last_digit + '0');

/* Return the value of the last digit */
return (last_digit);
}
