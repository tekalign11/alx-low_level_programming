#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: points the string
 */
void rev_string(char *s)
{
	int l, m, n, temp;

	l = 0;
	while (s[l] != '\0')
		l++;
	n = 0;
	m = l - 1;
	while (n < m)
	{
		temp = s[n];
		s[n] = s[m];
		s[m] = temp;
		n++;
		m--;
	}
}

