#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of jack
 * description: print starting from 00
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			printf("%d", i / 10);
			printf("%d", i % 10);
			printf(":");
			printf("%d", j / 10);
			printf("%d\n", j % 10);
		}
}
