#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: size of the array
 * Return: The pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	void *narray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	narray = malloc(nmemb * size);

	if (narray == NULL)
		return (NULL);
	for (a = 0; a < nmemb; a++)
		*((char *)narray + a * size) =  0;
	return (narray);
}
