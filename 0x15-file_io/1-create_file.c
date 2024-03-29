#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file
 * @text_content: content to be added
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t bizat;
	int t_len = 0;

	if (text_content != NULL)
	{
		while (text_content[t_len])
		{
			t_len++;
		}
	}
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor < 0)
	{
		close(descriptor);
		return (-1);
	}
	bizat = write(descriptor, text_content, t_len);
	if (bizat < 0)
	{
		close(descriptor);
		return (-1);
	}

	close(descriptor);
	return (1);
}
