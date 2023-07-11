#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of command-line arguments passed to the program,
 *        followed by a newline.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void) argv;
return (0);
}
