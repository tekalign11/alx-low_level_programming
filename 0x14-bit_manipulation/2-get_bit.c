#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the decimal
 * @index: the bit at the index
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;
	int s[32];
	int z[32];
	unsigned int t = 0, k = 0;

	if (n == 0)
		return (0);
	while (n > 0)
	{
		m = (n >> 1);
		if (m * 2 == 0)
		{
			s[k] = 0;
		}
		else
			s[k] = 1;
		n = m;
		k++;
	}
	if (index >= k)
		return (0);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (k > 0)
	{
		k--;
		z[t] = s[k];
		t++;
	}
	return (z[index]);
}
