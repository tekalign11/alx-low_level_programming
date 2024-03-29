#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with constant byte
 *
 * @s: Pointer pointing to a string
 *
 * @b: The constant
 * @n: The size
 *
 * Return: Pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
