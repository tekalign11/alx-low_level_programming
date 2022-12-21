#include "main.h"

/**
 * leet - this function helpe to encode a string
 * @str: the string to be encoded
 * Return: Always success
 */
char *leet(char *str)
{
	int yes1 = 0, yes2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++yes1])
	{
		for (yes2 = 0; yes2 <= 7; yes2++)
		{
			if (str[yes1] == leet[yes2] ||
					str[yes1] - 32 == leet[yes2])
			{
				str[yes1] = yes2 + '0';
			}
		}
	}
	return (str);
}
