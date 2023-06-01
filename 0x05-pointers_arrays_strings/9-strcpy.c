#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: pointed to
 * @src: String pointed to by
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		src[j] = dest[j];
		j++;
	}

	return (dest);
}
