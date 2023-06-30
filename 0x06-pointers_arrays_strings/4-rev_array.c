#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i, j;

for (i = 0, j = n - 1; i < j; i++, j--)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
