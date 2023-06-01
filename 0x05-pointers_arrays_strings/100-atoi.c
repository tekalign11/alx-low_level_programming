#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: The string to be converted
 *
 * Return: Always success
 */
int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 0 && s[i] <= 9)
			*s = s[i];
		else
			break;
		i++;
	}
	return (0);
}
