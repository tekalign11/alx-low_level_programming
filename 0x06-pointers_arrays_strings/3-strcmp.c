#include "main.h"

/**
 *  _strcmp - this function compares two strings
 * @s1: string one
 * @s2: string two
 */
int _strcmp(char *s1, char *s2)
{
	int t = 0, nur = 0;

	while (1)
	{
		if (s1[t] == '\0' && s2[t] == '\0')
			break;
		else if (s1[t] == '\0')
			nur = s2[t];
			break;
		else if (s2[t] == '\0')
			nur = s1[t];
			break;
		else if (s1[t] != s2[t]
		{
			nur = s1[t] - s2[t];
			break;
		}
		else
			t++;
	}
	return (nur);
}
