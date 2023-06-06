#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 * Return: Always sucess (0)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = r + (s1[i] - s2[i]);
		i++;
	}
	return (r);
}
