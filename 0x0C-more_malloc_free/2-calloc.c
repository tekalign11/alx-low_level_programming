#include "main.h"

#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *t;
	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = malloc(nmemb * size);
	if (t == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < (nmemb * size); k++)
		t[k] = 0;
	return (t);
}
