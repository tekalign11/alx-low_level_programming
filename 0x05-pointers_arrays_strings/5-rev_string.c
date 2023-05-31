#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int j = 0;
	int m, k;

	while (s[j] != '\0')
	{
		j++;
	}

	for (m = 0; m < j / 2; m++)
	{
		k = s[m];
		s[m] = s[j - m - 1];
		s[j - m - 1] = k;
	}
}
