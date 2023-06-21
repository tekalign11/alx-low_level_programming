#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int totalbytes = atoi(argv[1]);

	if (totalbytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *tptr = (unsigned char *)&main;

	for (int i = 0; i < totalbytes; i++)
	{
		printf("%02x ", tptr[i]);
	}
	printf("\n");
	return (0);
}
