#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: The pointer to pointer
 *
 * @to: The other pointer
 */
void set_string(char **s, char *to)
{

	*s = (char *)&to;
}
