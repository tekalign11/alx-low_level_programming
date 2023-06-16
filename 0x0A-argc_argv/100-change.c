#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Argument vector
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{

	needchange(argc, argv);
	return (0);
}

/**
 * needchange - prints minimum number of coins to make change
 * @argc: The number of arguments
 * @argv: Arguments vector
 * Return: 0 if success else 1
 */
int needchange(int argc, char *argv[])
{
	int k = 0;
	long int res = 0;
	int i;
	long int num, mod, change;

	while (k < argc)
	{
		k++;
	}
	if (k != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
			int coins[] = {1, 2, 5, 10, 25};

			for (i = 4; i >= 0; i--)
			{
				res = res + num / coins[i];
				mod = num % coins[i];
				num = mod;
			}
			change = res + num;
			printf("%ld\n", change);
		}
	}
	return (0);
}
