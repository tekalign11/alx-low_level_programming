#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 *
 * @str: The string to be returned
 *
 */
void puts2(char *str)
{
	int i = strlen(str);
	char j;

	for (j = 0; j < i; j += 2)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
