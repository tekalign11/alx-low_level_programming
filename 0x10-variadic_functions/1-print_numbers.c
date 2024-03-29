#include "variadic_functions.h"

/**
 * print_numbers - prints args numbers
 * @separator: The separater string to be used
 * @n: the number of arguments passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	int k;
	va_list args;

	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		k = va_arg(args, int);
		printf("%d", k);
		if (t < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
