#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints time table
 * @n: the number determining the time table
 * Description: prints time table of n starting with 0
 * Return: Always success (0)
 */
void print_times_table(int n)
{
	int k, l;

	if ((n >= 0) && (n < 16))
	{
		for (k = 0; k <= n; k++)
		{
			for (l = 0; l <= n; l++)
			{
				printf("%d", k * l);
				if (k == n)
					printf(",");
				if ((k * (l + 1)) > 100)
					printf(" ");
				else if (((k * (l + 1)) < 100) && ((k * (l + 1)) > 9))
					printf("  ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}
}
