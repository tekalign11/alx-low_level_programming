#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: points the string
 */
void rev_string(char *s)
{
	int l, m, n, o;

	l = 0;
	while (s[l] != '\0')
		l++;
	n = 0;
	m = l - 1;
	while (m < n)
	{
		o = s[n];
		s[n] = s[m];
		s[m] = o;
		n++;
		m--;
	}
}

