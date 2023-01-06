#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: sting one
 * @src: string two
 * @n: integer one
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int yes = 0, tek = 0;

	while (dest[yes++])
		tek++;
	for (yes = 0; src[yes] && yes < n; yes++)
		dest[tek++] = src[yes];
	return (dest);
}
