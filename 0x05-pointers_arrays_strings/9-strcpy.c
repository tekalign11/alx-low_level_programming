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

	while(src[i] != '\0')
	{
		i++;
	}
	while (*src !=  '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
