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
	int a = 0;
	int t = j - 1;

	for (m = a; m < t; m++)
	{
		k = s[m];
		s[m] = s[t];
		s[t] = k;
		t--;
	}
}
