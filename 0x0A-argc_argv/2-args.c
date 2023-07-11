#include "main.h"
#include <stdio.h>

/**
 * main - Prints all command-line arguments passed to the program,
 *        one argument per line, followed by a newline.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
