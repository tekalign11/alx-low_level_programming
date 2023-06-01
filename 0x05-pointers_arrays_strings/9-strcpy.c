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

	while (*src != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
