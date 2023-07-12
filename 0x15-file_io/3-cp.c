#include "main.h"

/**
 * copy_content - copies contentes from one file to another
 * @src_file: source file
 * @dest_file: destination file
 */

void copy_content(const char *src_file, const char *dest_file)
{
	int sfd, dfd, cfd;
	char buffer[1024];
	ssize_t cb;

	sfd = open(src_file, O_RDONLY);
	if (sfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	/*if (src_file != NULL)
	{
		while (src_file[f_len])
		{
			f_len++;
		}
	}*/
	dfd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC | 0664);
	if (dfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	while ((cb = read(sfd, buffer, sizeof(buffer))) > 0)
	{
		if (write(dfd, buffer, cb) != cb)
		{
			dprintf(STDERR_FILENO, "Error: Write error\n");
			exit(100);
		}
	}
	close(dfd);
	cfd = close(sfd);
	if (cfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	copy_content(file_from, file_to);
	return (0);
}
