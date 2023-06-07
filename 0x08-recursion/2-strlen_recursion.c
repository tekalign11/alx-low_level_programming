#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: The pointer to the string
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	else
	{
		i = i + 1;
		_strlen_recursion(s);
	}
	return (i);
}
