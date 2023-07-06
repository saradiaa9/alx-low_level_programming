#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - checks whether a number is prime
 * by checking if it is divisible by any integer from 2 to i
 *
 * @n: the number to check for primality
 * @i: the current candidate for a factor of n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
if (i == 1)
{

return (1);
}
else if (n % i == 0)
{

return (0);
}
else
{

return (is_prime_helper(n, i - 1));
}
}

/**
 * is_prime_number - checks whether a number is prime by
 * checking if it is divisible by any integer from 2 to n-1
 *
 * @n: the number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{

return (0);
}
else
{
return (is_prime_helper(n, n - 1));
}
}
