#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
while (n-- > 0)
{
*p++ = *src++;
}
return (dest);
}
