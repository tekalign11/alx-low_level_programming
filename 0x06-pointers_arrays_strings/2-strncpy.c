#include "main.h"

/**
 * _strncpy - copies two strings
 *
 * @dest: The string on which string copied
 * @src: The second string
 * @n: The size to be copied
 * Return: Always sucess (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int tek = 0;
	int j = 0;

	while (src[tek] != '\0')
	{
		tek++;
	}
	while (j < n && j <= tek)
	{
		dest[j] = src[j];
		j++;
	}
	dest[n] = '0';
	return (dest);
}
