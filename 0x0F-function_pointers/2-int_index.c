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
	int t = 0;

	if (size <= 0)
		return (-1);
	while (t < size)
	{
		if (cmp(array[t]) == 0)
		{
			return (t);
		}
		t++;
	}
	return (-1);
}
