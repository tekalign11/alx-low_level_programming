#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int z = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if ((*b != '0') && (*b != '1'))
		{
			return (0);
		}
	       z = (z << 1) + (*b - '0');
	       b++;
	}
	return (z);
}
