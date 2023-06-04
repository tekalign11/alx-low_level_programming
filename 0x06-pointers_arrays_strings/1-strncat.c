#include "main.h"

/**
 * _strncat - concatnates two strings
 *
 * @dest: The string on which string added
 * @src: The other string from which string taken
 * @n: The size of bytes to be taken
 * Return: Always success (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (l < n)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	return (dest);
}
