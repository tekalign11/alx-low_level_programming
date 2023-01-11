#include <unistd.h>

/**
 * _putchar - writes character c
 * @c: the character to be printed
 * Retrun: 1 on success, -1 on error and errno is set appropratly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
