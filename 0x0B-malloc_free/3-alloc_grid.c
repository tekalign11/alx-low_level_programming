#include "main.h"

/**
 * alloc_grid - returns pointer to two diemnsional array
 * @width: The width of the array
 * @height: Height of the array
 * Return: Pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **mygrid;

	mygrid = malloc(4 * width * height + 4);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	while (i < width)
	{
		while (j < height)
		{
			mygrid[i][j] = i + j;
			i++;
			j++;
		}
	}
	return (mygrid);
}
