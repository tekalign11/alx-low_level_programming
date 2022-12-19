#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an array of intigers
 * @n: the number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);

		if (t != n - 1)
			printf(",");
			printf(" ");
	}
	printf("\n");
}
