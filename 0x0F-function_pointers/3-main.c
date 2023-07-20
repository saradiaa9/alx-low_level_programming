#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 if the program executes successfully, 98, 99, or 100 otherwise
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error: Usage: %s <a> <operator> <b>\n", argv[0]);
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    op_func = get_op_func(argv[2]);

    if (op_func == NULL)
    {
        printf("Error: Unknown operator %s\n", argv[2]);
        exit(99);
    }

    result = op_func(a, b);

    printf("%d\n", result);

    return (0);
}
