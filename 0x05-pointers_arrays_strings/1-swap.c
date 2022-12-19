#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first ineger
 * @b: the second integers
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
