#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - write a function that concatenates strings
 * @s1: the first string
 * @s2: the next string
 * @n: amount of byte
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *sout;
	unsigned int ls1, ls2, lsout, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	if (n > ls2)
	{
		n = ls2;
	}
	lsout = ls1 + n;
	sout = malloc(lsout + 1);
	if (sout == NULL)
		return (NULL);
	for (t = 0; t < lsout; t++)
		if (t < ls1)
			sout[t] = s1[t];
		else
			sout[t] = s2[t - ls1];
	sout[t] = '\0';
	return (sout);
}
