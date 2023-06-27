#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
