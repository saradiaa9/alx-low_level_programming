#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or if
 * malloc fails.
 */
char *_strdup(char *str)
{
size_t len;
char *dup;

if (str == NULL)
return (NULL);

len = strlen(str) + 1;
dup = malloc(len);

if (dup == NULL)
return (NULL);

memcpy(dup, str, len);
return (dup);
}
