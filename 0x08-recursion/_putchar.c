#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character from keyboard
 * @c: the character to be written
 * Return: 1 on success and else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
