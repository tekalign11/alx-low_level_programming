#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator string
 * @n: the size of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	char *m;
	va_list teka;

	va_start(teka, n);

	for (t = 0; t < n; t++)
	{
		m = va_arg(teka, char *);
		if (m == NULL)
			printf("nil");
		else
			printf("%s", m);
		if (t < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
