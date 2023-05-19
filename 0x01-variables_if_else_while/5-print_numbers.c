#include <stdio.h>
/**
 * main - entry point
 * Description: Prints single digit base 10 nums
 * Return: Always sucess (0)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
