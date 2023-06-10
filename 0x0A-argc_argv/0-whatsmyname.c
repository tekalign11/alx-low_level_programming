#include "main.h"


/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: Pointer to the arguments
 * Return: Always success
 */

int main(int argc, char *argv[])
{

	myargs(argc, argv);
	return (0);
}
/**
 * myargs - prints the first argument or program name
 * @argc: The number of arguments
 * @argv: The name of arguments
 */
void myargs(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
}
