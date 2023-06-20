#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: size of the array
 * Return: The pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	int *narray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	narray = malloc(nmemb * size);

	while (*narray != '\0')
		return (0);
	if (narray == NULL)
		return (NULL);
	narray = malloc(nmemb * size);

	for (x = 0; x < nmemb; x++)
		*((char *)narray + x * size) =  0;
	return (narray);
}
