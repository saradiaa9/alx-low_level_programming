#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with provided data
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a character array for the dog's name
 * @age: The age of the dog as a float
 * @owner: Pointer to a character array for the owner's name
 *
 * Description: This function initializes the members of the struct dog
 * with the provided data.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
