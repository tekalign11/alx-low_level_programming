#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: Destination memory area
 *
 * @src: The source memory area
 *
 * @n: The size of memory copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
