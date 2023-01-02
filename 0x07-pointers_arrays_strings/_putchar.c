#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints requested character
 * @c: the character to be printed
 * Return: returns 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
