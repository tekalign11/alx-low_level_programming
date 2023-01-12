#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the memory, stat value is 98
 */

void *malloc_checked(unsigned int b)

{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
