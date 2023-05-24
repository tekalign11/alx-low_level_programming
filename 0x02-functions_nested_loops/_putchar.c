#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Description: This function prints a char to the stdout
 * Return: On success 1 and on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
