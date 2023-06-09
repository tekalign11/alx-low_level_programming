#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc - The number of arguments
 * @argv: The pointer to strings of arguments
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		i++;
	}
	argc = i;
	return (argc);
}
