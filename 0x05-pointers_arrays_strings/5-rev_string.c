#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int j;
	int i = strlen(s);

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
