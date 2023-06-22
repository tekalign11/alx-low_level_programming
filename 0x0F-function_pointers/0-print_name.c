#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name
 * @name: The nname to be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
	{
		return;
	}
	f(name);
}
