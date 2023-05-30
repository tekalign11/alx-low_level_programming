#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i = strlen(s);
	char j;

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c\n", s[j]);
	}
}
