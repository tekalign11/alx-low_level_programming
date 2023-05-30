#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * This function returns the length of a string
 *
 * @s: The string whose length to be returned
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int k;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
