#include "main.h"

/**
 * reverse_array - reverses array contents
 * @n: The number of elements of an array
 * @a: The array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
	}
}
