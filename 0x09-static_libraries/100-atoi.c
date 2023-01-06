#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer in  in the string
 *
 * Return: void
 */
int _atoi(char *s)
{
	int tek;
	unsigned int integer;
	char *now;

	now = s;
	integer = 0;
	tek = 1;
	while (*now != '\0' && (*now < '0' || *now > '9'))
	{
		if (*now == '-')
			tek *= -1;
		now++;

	}
	if (*now != '\0')
	{
		do {
			integer = integer * 10 + (*now - '0');
			now++;
		} while (*now >= '0' && *now <= '9');
	}
	return (integer * tek);
}
