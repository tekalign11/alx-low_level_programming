#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: Maximum value
 * Return: Pointer to the array
 */

int *array_range(int min, int max)
{
	int i, k = 0;
	int m;
	int *newarr;

	m = (max - min) + 1;
	if (min > max)
		return (NULL);
	newarr = malloc(sizeof(int) * m);

	if (newarr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		newarr[k] = i;
		k++;
	}
	return (newarr);
}
