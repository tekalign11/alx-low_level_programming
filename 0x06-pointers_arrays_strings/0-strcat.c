#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 * @dest: one of the strings
 * @src: the other string
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int yes = 0, tek = 0;

	while (dest[yes])
		tek++;
	for (yes = 0; src[yes]; yes++)
		dest[tek++] = src[yes];
	return (dest);
}
