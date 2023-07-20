#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints a list of arguments of various types.
 * @format: The format string indicating the types of arguments.
 * @...: The arguments to print.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char c;
int num;
float f;

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
break;
default:
break;
}

if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}

i++;
}

va_end(args);

printf("\n");
}
