#include "main.h"

/**
 * cap_string - changes to uppercase
 * @s: The string to be changed
 * Return: The string
 */

char *cap_string(char *s)
{
	int t = 0;

	while(s[t] != '\0')
	{
		if (s[t] == ' ')
			s[t + 1]  = s[t +1] - 'a' + 'A';
		t++;
	}
	return (s);
}
