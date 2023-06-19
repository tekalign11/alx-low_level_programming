#include <stdio.h>
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

/**
 * init_dog - initializes the struct dog
 * @d: pointer to the struct
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog other_dog;
	
	other_dog.name = "Shasho";
	other_dog.age = 7;
	other_dog.owner = "Abebe";

	*d = other_dog;
}
