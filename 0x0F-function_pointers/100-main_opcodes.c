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
	int t;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int totalbytes = atoi(argv[1]);

	if (totalbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *totalptr = (unsigned char *)&main;

	for (t = 0; t < totalbytes; t++)
	{
		printf("%02x ", totalptr[t]);
	}
	printf("\n");
	return (0);
}
