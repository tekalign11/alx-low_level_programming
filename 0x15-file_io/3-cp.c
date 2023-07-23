#include "main.h"
/**
 * copy_content - copies contentes from one file to another
 * @src_file: source file
 * @dest_file: destination file
 */
void copy_content(char *src_file, char *dest_file)
{
	int cfd, sfd, dfd;
	char buffer[4096];
	ssize_t cb, b_written;
	ssize_t written = 0;

	sfd = open(src_file, O_RDONLY);
	if (sfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	dfd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dfd == -1)
	{
		exit(98);
	}

	while ((cb = read(sfd, buffer, sizeof(buffer))) > 0)
	{
		while (written < cb)
		{
			b_written = write(dfd, buffer + written, cb - written);
			written += b_written;
		}
	}
	if (b_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	close(dfd);
	cfd = close(sfd);
	if (cfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cfd);
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
	char *src_file, *dest_file;

	src_file = argv[1];
	dest_file = argv[2];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content(src_file, dest_file);
	return (0);
}
