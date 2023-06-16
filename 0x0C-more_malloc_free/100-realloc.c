#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: Pointer to the allocated memory
 * @old_size: Size of the old allocated memory
 * @new_size: Size of the new memory
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	(void)old_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (new_ptr);
}
