#include "main.h"

/**
 * main - Prints aruments
 * @argc: Argument count
 * @argv: pointer to argument string
 * Return: Always success
 */

int main(int argc, char *argv[])
{

	myargs_list(argc, argv);
	return (0);
}

/**
 * myargs_list - prints the name of arguments passed
 * @argc: The number of arguments
 * @argv: Argument vector
 */

void myargs_list(int argc, char *argv[])
{
	int t = 0;

	while (t < argc)
	{
		printf("%s\n", argv[t]);
		t++;
	}
}
