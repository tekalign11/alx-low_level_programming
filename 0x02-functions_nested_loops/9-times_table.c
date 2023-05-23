#include <stdio.h>
#include "main.h"

/**
 * times_table - creates time table
 * description: creates nine time table with commas
 * Return: Always success (0)
 */
void times_table(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			printf("%d", k * l);
			if (l != 9)
				printf(",");
			if ((k * (l + 1)) > 9)
				printf(" ");
			else if ((k * (l + 1)) < 10)
				printf("  ");
		}
		printf("\n");
	}
}
