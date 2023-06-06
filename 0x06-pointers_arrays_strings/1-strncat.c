#include "main.h"

/**
 * _strncat - copies n bytes of a string
 * @dest: The destination string
 * @src: The source string
 * @n: The size to be copied
 * Return: The pointer to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
