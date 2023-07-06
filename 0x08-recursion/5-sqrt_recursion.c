#include "main.h"
#include <stdio.h>

/**
 * natural_sqrt - calculates the natural
 * square root of a number using recursion
 *
 * @n: the number to calculate the natural square root of
 * @i: the current candidate for the natural square root
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int natural_sqrt(int n, int i)
{
if (i * i == n)
{

return (i);
}
else if (i * i > n)
{

return (-1);
}
else
{

return (natural_sqrt(n, i + 1));
}
}

/**
 * _sqrt_recursion - returns the natural square root
 * of a number using recursion
 *
 * @n: the number to calculate the natural square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
return (natural_sqrt(n, 0));
}
