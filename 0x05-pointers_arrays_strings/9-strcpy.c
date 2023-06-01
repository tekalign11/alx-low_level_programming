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
	int j;
	
	while (src[i] != '0')
	{
		i++;
	}

	for (j = src[0]; j <= src[i]; i++)
	{
		src = dest;
	}
	return (dest);
}
