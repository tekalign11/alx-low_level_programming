#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the name of the file
 * @letters: the number of letters to be read
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	char *store;
	ssize_t r, m;

	descriptor = open(filename, O_RDONLY);
	if (descriptor < 0)
	{
		return (0);
	}
	store = (char *)malloc(sizeof(char) * (letters + 1));
	if (store == NULL)
	{
		close(descriptor);
		return (0);
	}
	r = read(descriptor, store, letters);
	if (r < 0)
	{
		free(store);
		close(descriptor);
		return (0);
	}
	m = write(STDOUT_FILENO, store, r);
	if (m < 0)
	{
		free(store);
		close(descriptor);
		return (0);
	}
	close(descriptor);
	return (m);
}
