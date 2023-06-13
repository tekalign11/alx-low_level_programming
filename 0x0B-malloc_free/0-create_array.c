#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: The size of the array to be created
 * @c: The chars making the array
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);

	if (size == 0)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
