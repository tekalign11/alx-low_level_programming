#include "main.h"

/**
 * string_nconcat - concatenates strings
 * @s1: The first string
 * @s2: The second string
 * @n: The size of the string
 * Return: The concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, t = 0, k = 0, m = 0;
	char *concstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	concstr = malloc(i + k + 1);

	if (concstr == NULL)
		return (NULL);
	while (t < i)
	{
		concstr[t] = s1[t];
		t++;
	}
	while (m < k)
	{
		concstr[t] = s2[m];
		t++;
		m++;
	}
	if (n < k)
	{
		concstr[n + i] = '\0';
	}
	else
	{
		concstr[t - 1] = '\0';
	}
	return (concstr);
	free(concstr);
}
