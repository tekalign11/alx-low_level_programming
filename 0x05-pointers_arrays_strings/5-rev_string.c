#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int k;
	int l;
	int temp;
	int j;

	while (s[k])
	{
		k++;
	}
	for (l = 0, j < k - 1; j > l; l++, j--)
	{
		temp = s[l];
		s[l] = s[j];
		s[j] = temp;
	}
}
