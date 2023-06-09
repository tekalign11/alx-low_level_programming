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
	int r = 0;
	/*int sym = 1;

	if (s[0] == '-')
	{
		sym = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}*/
	while (s[i] != '\0')
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			if ((s[i] -1) == '-')
			{
				r = -1 * (r * 10 + (s[i] - '0'));
			}
			else
				r = r * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}
	return (r);
}
