#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 * @dest: one of the strings
 * @src: the other string
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int i, t;

	t = -1;
	for (i = 0; dest[i] != '\0'; i++)
		do {
			t++;
			dest[i] = src[t];
			i++;
		}
	while (src[t] != '\0');
	return (dest);
}
