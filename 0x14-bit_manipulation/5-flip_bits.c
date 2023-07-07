#include "main.h"

/**
 * flip_bits - gets number of bits to be flipped
 * @n: the fisrt number
 * @m: the second number
 * Return: the number of numbers to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int t = 0;
	unsigned long int Exclusiveor = n ^ m;

	while (Exclusiveor != 0)
	{
		if (Exclusiveor & 1)
		{
			t++;
		}
		Exclusiveor >>= 1;
	}
	return (t);
}
