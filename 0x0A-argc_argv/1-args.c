#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: The number of arguments
 * @argv: The pointer to strings of arguments
 * Return: Always success
 */
int main(int argc, char *argv[])
{

	args_count(argc, argv);

	return (0);
}

/**
 * args_count - prints the name of arguments
 * @argc: The number of arguments
 * @argv: Pointer to the string of name of arguments
 * Return: The number of arguments
 */
void args_count(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		i++;
	}
	argc = i - 1;
	printf("%d\n", argc);
}
