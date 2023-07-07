#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	char s[64];
	int t = 0;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		m = ((n >> 1));
		if ((m * 2) == n)
			s[t] = '0';
		else
			s[t] = '1';
		n = m;
		t++;
	}
	while (t > 0)
	{
		t--;
		_putchar(s[t]);
	}
}
