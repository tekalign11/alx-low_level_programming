#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Argument vector
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{

	_argsmultiple(argc, argv);
	return (0);
}

/**
 * _argsmultiple - multiplies two arguments
 * @argc: The number of arguments
 * @argv: Arguments vector
 * Return: 0 if success else 1
 */
int _argsmultiple(int argc, char *argv[])
{
	int k = 1;
	int multiple = 1;

	while (k < argc)
	{
		multiple = multiple * atoi(argv[k]);
		k++;
	}
	if (k >= 2)
	{
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
