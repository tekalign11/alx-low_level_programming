#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the struct dog
 * @d: pointer to the struct
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = "Shasho";
	(*d).age = 7;
	(*d).owner = "Abebe";
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
