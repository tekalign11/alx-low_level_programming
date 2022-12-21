#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: adress of array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tek, yes;

	for (yes = n - 1; yes > n / 2; yes--)
	{
		tek = a[n - 1 - yes];
		a[n - 1 - yes] = a[yes];
		a[yes] = tek;
	}
}
