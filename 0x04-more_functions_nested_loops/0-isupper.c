#include "main.h"

/**
 * _isupper - checks for upper case character
 * Description: cheks characters if they are uppercase
 * @c:The character to be checked
 *
 * Return: 1 if character is uppercase, else 0
 */
int _isupper(int c)
{

	if (((c > 64) && (c < 91)))
		return (1);
	else
		return (0);
}
