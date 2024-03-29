#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: Pointer to a string
 * Return: Pinter to the allocated memory in space
 */
char *_strdup(char *str)
{
	int i = 0;
	int k = 0;
	char *dupstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dupstr = malloc(i + 1);

	if (dupstr == NULL)
		return (NULL);
	while (k <= i)
	{
		dupstr[k] = str[k];
		k++;
	}
	return (dupstr);
	free(dupstr);
}
