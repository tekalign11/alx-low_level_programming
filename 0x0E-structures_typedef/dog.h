#ifndef DOGSTRUCT_H
#define DOGSTRUCT_H
/**
 * struct dog - creates a new struct variable dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - changes the name of struct dog to struct dog_t
 *
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
