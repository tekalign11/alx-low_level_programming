#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: The number to be powered
 * @y: Thepowering number
 * Return: The powered number
 */

int _pow_recursion(int x, int y)
{
	int tek;

	if (y < 0)
		tek = -1;
	else if (y == 0)
		tek = 1;
	else if (y == 1)
		tek = x;
	else
		tek = x * _pow_recursion(x, y - 1);
	return (tek);
}
