#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character being checked
 * Description: checks and returns the type of character
 * Return: 1 if it is letter else 0
 */
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
