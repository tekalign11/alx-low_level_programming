#include "main.h"

/**
 * string_toupper - changes all letters of a string
 * @str: string it is parameter
 * Return: the string
 */
char *string_toupper(char *str)
{
	int yes = 0;

	while (str[yes++])
	{
		if (str[yes] >= 'a' && str[yes] <= 'z')
		{
			str[yes] -= 32;
		}
	}
	return (str);
}
