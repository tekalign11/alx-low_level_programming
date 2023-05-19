#include <stdio.h>

/**
 * main - Entry point
 * description: prints alphabetes in upper and lower using putchar
 * return: 0
 */
int main(void)
{
	int n = 65;

	while (n < 91)
		putchar(n);
		n++;
	for (n = 97; n < 123; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
