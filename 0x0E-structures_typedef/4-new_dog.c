#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and returns a pointer to it
 * @name: Pointer to a character array for the dog's name
 * @age: The age of the dog as a float
 * @owner: Pointer to a character array for the owner's name
 *
 * Return: Pointer to the newly created dog struct, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;

new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return NULL;


new_dog_ptr->name = strdup(name);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return NULL;
}

new_dog_ptr->owner = strdup(owner);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return NULL;
}


new_dog_ptr->age = age;

return new_dog_ptr;
}

