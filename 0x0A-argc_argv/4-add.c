#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Argument vector
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{

	intargssum(argc, argv);
	return (0);
}

/**
 * intargssum - multiplies two arguments
 * @argc: The number of arguments
 * @argv: Arguments vector
 * Return: 0 if success else 1
 */
int intargssum(int argc, char *argv[])
{
	int k = 1;
	int sum = 0;
	int num;

	while (k < argc)
	{
		if (!(*argv[k] >= 'a' && *argv[k] <= 'z'))
		{
			num = atoi(argv[k]);
			sum  = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		k++;
	}
	if (k == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
