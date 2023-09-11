#include <stdio.h>
#include "dog.h" 

/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any element of the dog struct is NULL, it prints "(nil)" instead.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
