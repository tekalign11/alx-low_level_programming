#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: the string pointed to by
 * @dest:the destiny
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *error = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (error);
}


