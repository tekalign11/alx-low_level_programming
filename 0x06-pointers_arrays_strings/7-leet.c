#include "main.h"

/**
 * leet - encodes a string in to 1337
 *
 * @s: The string to be encoded
 *
 * Return: The string
 */

char *leet(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] == 'a' || s[k] == 'A')
			s[k] = 4;
		else if (s[k] == 'e' || s[k] == 'E')
			s[k] = 3;
		else if (s[k] == 'o' || s[k] == 'O')
			s[k] = 0;
		else if (s[k] == 't' || s[k] == 'T')
			s[k] = 7;
		else if (s[k] == 'l' || s[k] == 'L')
			s[k] = 1;
		else
			*s = s[k];
		k++;
	}
	return (s);
}
