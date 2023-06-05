#include "main.h"
#include <string.h>

/**
 * _strchr - locates achracater in a string
 *
 * @s: Th pointer to string
 *
 * @c: The character to be located
 *
 * Return: Pointer to first occurance in s or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	return (NULL);
}
