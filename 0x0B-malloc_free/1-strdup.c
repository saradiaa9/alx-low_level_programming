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
if (str == NULL)
{
return (NULL);
}

size_t len = strlen(str) + 1;
char *dup = malloc(len);

if (dup == NULL)
{
return (NULL);
}

memcpy(dup, str, len);

return (dup);
}
