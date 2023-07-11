#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds all positive numbers passed as command-line arguments.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 if successful, 1 if invalid input.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;    
if (argc == 1)
{
printf("0\n");
return (0);
}
    
for (i = 1; i < argc; i++)
{
int j = 0;
        
if (argv[i][j] == '-')
{
printf("Error\n");
return (1);
}
        
while (argv[i][j])
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
            
j++;
}
        
sum += atoi(argv[i]);
}
    
printf("%d\n", sum);
    
return (0);
}
