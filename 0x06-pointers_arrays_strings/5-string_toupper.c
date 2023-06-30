#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Pointer to the string to convert
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
char *p = str;

while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - ('a' - 'A');
}
p++;
}

return (str);
}
