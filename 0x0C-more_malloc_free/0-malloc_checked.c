#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: The numbers of integers to be stored
 * Return: Returns nothing
 */
void *malloc_checked(unsigned int b)
{
	char *chr;
	int *inr;
	float *flt;
	double *dbl;

	chr = malloc(sizeof(char) * b);

	if (chr == NULL)
		exit(98);
	return (chr);
	inr = malloc(sizeof(int) * b);

	if (inr == NULL)
		exit(98);
	return (inr);

	flt = malloc(sizeof(float) * b);

	if (flt == NULL)
		exit(98);
	return (flt);

	dbl = malloc(b * sizeof(double));

	if (dbl == NULL)
		exit(98);
	return (dbl);
}
