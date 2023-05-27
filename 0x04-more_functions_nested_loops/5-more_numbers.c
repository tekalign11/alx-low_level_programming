#include "main.h"

/**
 * more_numbers - prints to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int t, k;

	for (t = 0; t < 10; t++)
	{
		for (k = 0; k < 15; k++)
		{
			_putchar(k % 10 + '0');
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
		}
		_putchar('\n');
	}
}
