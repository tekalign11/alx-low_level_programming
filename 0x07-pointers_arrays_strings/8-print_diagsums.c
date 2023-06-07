#include "main.h"

/**
 * print_diagsums - Prints the diagonal of a square
 * @a: The array
 * @size: The size of the square
 */

void print_diagsums(int *a, int size)
{
	int t, k;
	int m = 0;
	int n = 0;

	for (t = 0; t < size; t++)
		for (k = 0; k < size; k++)
		{
			if (t == k)
			{
				m = m + (a[t * size + k]);
			}
			else if (t + k == sizie - 1)
				n = n + (a[t * size + k]);
		}
	printf("%d, %d\n", m, n);
}
