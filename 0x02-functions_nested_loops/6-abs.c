#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @i: the integerits absolute value to be printed
 * Description: print the absolute value of a number
 * Return: Always success (0)
 */
int _abs(int i)
{

	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
