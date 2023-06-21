#include "function_pointers.h"

/**
 * array_iterator - executes a function to an array
 * @array: pointer to array
 * @size: array size
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k = 0;
	int t;

	while (k < size)
	{
		t = array[k];
		action(t);
		k++;
	}
}
