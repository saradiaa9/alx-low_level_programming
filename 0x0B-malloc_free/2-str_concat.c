#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenated string, or NULL if malloc fails.
 */
char *str_concat(char *s1, char *s2)
{
size_t len1;
size_t len2;
char *concat;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
concat = malloc(len1 + len2 + 1);

if (concat == NULL)
{
return (NULL);
}

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, len2 + 1);

return (concat);
}
