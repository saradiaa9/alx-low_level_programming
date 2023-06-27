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

int i;
char *string1;

string1 = str;


for (i = 0; string1[i] != '\0'; i += 2)
{
_putchar(string1[i]);
}

_putchar('\n');

}
