#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: pointer to string of bits
 * @index: the index
 * Return: 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	m = ~(1 << index);
	*n = *n & m;
	return (1);
}
