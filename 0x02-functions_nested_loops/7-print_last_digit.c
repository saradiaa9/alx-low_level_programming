#include <limits.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

/* Handle the special case of INT_MIN */
if (n == INT_MIN)
last_digit = 8;
else
/* Compute the last digit by taking the remainder of the absolute value of n divided by 10 */
last_digit = abs(n) % 10;

/* Print the last digit */
_putchar(last_digit + '0');

/* Return the value of the last digit */
return (last_digit);
}
