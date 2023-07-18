#include "main.h"
#include <stdio.h>
/**
 * Initializes a struct dog variable with the given name, age, and owner.
 *
 * @param d: pointer to a struct dog variable to initialize
 * @param name: pointer to a character array representing the dog's name
 * @param age: floating-point number representing the dog's age
 * @param owner: pointer to a character array representing the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
