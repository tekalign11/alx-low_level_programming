#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combination ofsingle digit nmbers
 * Return: Always success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
		for (j = 1; j < 10; j++)
		{
			if (i < j)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i < 8)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	putchar('\n');
	return (0);
}
