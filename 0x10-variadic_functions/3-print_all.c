#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
    int a = 0;
    int t = 0;
    char x;
    int y;
    float m;
    char *o;
    va_list args;

    while (format[a] != '\0')
    {
        a++;
    }

    va_start(args, format);

    while (t < a)
    {
        switch(format[t])
        {
            case 'c':
                x = va_arg(args, int);
                printf("%c", x);
                break;
            case 'i':
                y = va_arg(args, int);
                printf("%d", y);
                break;
            case 'f':
                m = va_arg(args, double);
                printf("%f", m);
                break;
            case 's':
                o = va_arg(args, char *);
                if (o == NULL)
                    printf("(nil)");
                else
                    printf("%s", o);
                break;
        }
	if (t < a - 1)
		printf(", ");
        t++;
    }
    printf("\n");

    va_end(args);
}

