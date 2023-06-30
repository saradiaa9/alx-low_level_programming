#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Negative value if s1 is less than s2,
 *         0 if s1 is equal to s2,
 *         Positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2) {
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
i++;
}
return (s1[i] - s2[i]);
}
