#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to capitalize
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int i = 0;
int is_new_word = 1;

while (str[i] != '\0')
{
if (is_new_word && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
is_new_word = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}');
i++;
}

return (str);
}
