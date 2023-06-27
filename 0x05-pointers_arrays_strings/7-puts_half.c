#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
    int length = strlen(str);
    int start;

    if (length % 2 == 0) {
        start = length / 2;
    } else {
        start = (length - 1) / 2;
    }

    for (int i = start; i < length; i++) {
        putchar(str[i]);
    }

    putchar('\n');
}
