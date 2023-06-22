#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns index
 * @array: pointer to array of integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	while (z < size)
	{
		if (cmp(array[z]) != 0)
		{
			return (z);
		}
		z++;
	}
	return (-1);
}
