#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *concat;
unsigned int i, j;

/* Handle NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the length of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Use the entire s2 if n is greater or equal to its length */
if (n >= len2)
n = len2;

/* Allocate memory for the concatenated string */
concat = malloc(len1 + n + 1); /* +1 for the null terminator */

if (concat == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Copy s1 to the concatenated string */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy the first n bytes of s2 to the concatenated string */
for (j = 0; j < n; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0'; /* Null-terminate the concatenated string */

return (concat); /* Return the concatenated string */
}
