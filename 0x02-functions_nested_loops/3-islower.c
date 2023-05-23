#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lower case character
 * @c:The character to be checked
 * The fucntion checkes for characters and returns 1 or 0
 * Return : 1 if the character is lower case else 0
 */
int _islower(int c)
{
	if ((c > 64) && (c < 91))
		return (0);
	else if ((c > 97) && (c < 123))
	{
		return (1);
	}
	return (0);
}
