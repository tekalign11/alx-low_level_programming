#include "main.h"

/**
 * _isupper - checks uppercase character
 *  @c: it is input character
 *  Return: 1 if character is uppercase, 0 if other else
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
