/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a character array for the dog's name
 * @age: The age of the dog as a float
 * @owner: Pointer to a character array for the owner's name
 *
 * Description: This struct is used to store information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
}
;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
