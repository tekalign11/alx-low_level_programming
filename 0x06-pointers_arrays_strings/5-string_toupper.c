#include "main.h"

/**
 * string_toupper - converts to uppercase
 * @s: The string to be checked
 * Return: The converted string
 */

char *string_toupper(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		if (s[t] >= 'a' && s[t] <= 'z')
		{
			s[t] = s[t] - 'a' + 'A';
		}
		t++;
	}
	return (s);
}
