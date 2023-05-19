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
	while (n > 97 & n < 123)
		putchar(n);
		n++;
	putchar('\n');
	return (0);
}
