#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to text to be added
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t app;
	int t_len = 0;

	if (filename == NULL)
		return (-1);
	descriptor = open(filename, O_WRONLY | O_APPEND);
	if (descriptor < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[t_len])
		{
			t_len++;
		}
	}
	app = write(descriptor, text_content, t_len + 1);
	if (app < 0)
	{
		close(descriptor);
		return (-1);
	}
	close(descriptor);
	return (1);
}
