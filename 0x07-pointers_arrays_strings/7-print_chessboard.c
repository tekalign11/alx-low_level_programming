#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int teka1, teka2;

	for (teka1 = 0; a[teka1][7]; teka1++)
	{
		for (teka2 = 0; teka2 < 8; teka2++)
		{
			_putchar(a[teka1][teka2]);
			_putchar('\n');
		}
	}
}
