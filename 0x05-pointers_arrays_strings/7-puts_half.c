#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: The string to be half of its char to be printed
 */
void puts_half(char *str)
{
	int j;
	int i = strlen(str);

	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i - 1; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	else
	{
		for (j = i / 2 + 1; j <= i - 1; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
}
