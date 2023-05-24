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
	int k;

	for (n = 0; n < 16; n++)
	{
		for (k = 0; k < 16; k++)
		{
			printf("%d", n * k);
			if (k != n)
				printf(",");
			if ((n * (k + 1)) > 9)
                                printf("  ");
                        else if ((n * (k + 1)) < 10)
                                printf("   ");
		}
                printf("\n");
	}
}
