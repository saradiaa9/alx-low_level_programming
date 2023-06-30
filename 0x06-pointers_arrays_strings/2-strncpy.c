#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *p = dest;


while (*src != '\0' && n-- > 0)
{
*p++ = *src++;
}


while (n-- > 0)
{
*p++ = '\0';
}

return (dest);
}
