#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: integer one
 * Return: success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	for ( ; t < n; t++)
		dest[t] = '\0';
	return (dest);
}
