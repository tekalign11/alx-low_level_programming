#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes of the memory area pointed
 * Return: pointer to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int teka;

	for (teka = 0; teka < n; teka++)
		*(s + teka) = b;
	return (s);
}
