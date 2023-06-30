#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
char *p = dest;


while (*p != '\0')
{
p++;
}


while (*src != '\0' && n-- > 0)
{
*p++ = *src++;
}


*p = '\0';

return (dest);
}
