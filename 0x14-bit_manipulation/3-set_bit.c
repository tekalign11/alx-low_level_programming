#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the strings of binary digits
 * @index: the index
 * Return: the 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (n == NULL)
		return (-1);

	m = 1 << index;
	*n = *n | m;
	return (1);
}
