#include "main.h"

/**
 * main - Prints aruments
 * @argc: Argument count
 * @argv: pointer to argument string
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
