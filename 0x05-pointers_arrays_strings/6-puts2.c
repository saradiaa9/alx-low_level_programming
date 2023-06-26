#include "main.h"
#include '<string.h>'
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
for (i = 0; str[i] != '\0' && str[i + 1] != '\0' ; i += 2)
{
_putchar(str[i]);
}
if (strlen(str)>20)
{
_putchar('.');
}
_putchar('\n');

}
