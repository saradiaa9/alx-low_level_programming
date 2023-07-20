#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a list of numbers.
 * @separator: The string to print between numbers.
 * @n: The number of integers to print.
 * @...: The integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++) {
printf("%d", va_arg(args, int));

if (separator != NULL && i < n - 1) {
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
