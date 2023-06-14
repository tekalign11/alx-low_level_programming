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

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[k] != 0)
	{
		k++;
	}
	s1 = malloc(i + k + 1);

	if (s1 == NULL)
		return (NULL);
	while (t <= (k))
	{
		s1[i + 1] = s2[t];
		t++;
		i++;
	}
	return (s1);
	free(s1);
}
