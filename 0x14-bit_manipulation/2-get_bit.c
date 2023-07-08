#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the decimal
 * @index: the bit at the index
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z;
	unsigned long int k;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	z = 1UL << index;
	k = (n & z) >> index;
	return (k);
}
