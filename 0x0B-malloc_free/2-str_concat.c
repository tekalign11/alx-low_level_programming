#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int t = 0;
	int k = 0;
	int m = 0;
	char *concptr;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[k] != 0)
	{
		k++;
	}
	concptr = malloc(i + k + 1);

	if (concptr == NULL)
		return (NULL);
	while (t < i)
	{
		concptr[t] = s1[t];
		t++;
	}
	while (m < k)
	{
		concptr[t] = s2[m];
		t++;
		m++;
	}

	return (concptr);
	free(concptr);
}
