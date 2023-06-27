#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
char *delimiter = strchr(str, '\0');
*delimiter = '\0';
char *string1
*string1=str;
int i;
for (i = 0; string1[i] != '\0' && string1[i + 1] != '\0' ; i += 2)
{
_putchar(string1[i]);
}

_putchar('\n');

}
