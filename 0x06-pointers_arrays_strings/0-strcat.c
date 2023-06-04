#include "main.h"

/**
 * _strcat - appends a string
 *
 * @dest: The string on which a string added to
 * @src: The string taken from this string
 * Return: Always success (0)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
