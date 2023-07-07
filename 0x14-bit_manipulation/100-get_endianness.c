#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int mynum = 1;
	char *pointer;

	pointer = (char *)&mynum;

	if (*pointer == 1)
		return (1);
	else
		return (0);
}
