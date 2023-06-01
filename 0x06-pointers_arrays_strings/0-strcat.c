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

	while (src[i] != '\0')
	{
		*dest = *dest + src[i];
		i++;
	}
	*dest = '\0';

	return (0);
}
