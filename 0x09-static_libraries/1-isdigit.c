#include "main.h"

/**
 * _isdigit - checks digit 0 to 9
 *
 * @c: the digit to be checked
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{

	if (((c > 47) && (c < 58)))
		return (1);
	else
		return (0);
}
