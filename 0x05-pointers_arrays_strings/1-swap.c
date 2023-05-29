#include "main.h"
/**
 * swap_int - swaps values of a and b
 *
 * This function swaps values of integers pointed by a and b
 *
 * @a:The first pointer
 *
 * @b: The second pointer
 */
void swap_int(int *a, int *b)
{
	int c, d;
	
	c = *a, d = *b;
	*b = c, *a = d;
}
