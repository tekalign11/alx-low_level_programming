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
        int sum = 0;
        int num;
	int l, m, n, o, p, q, r, s;

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
		num = atoi(argv[1]);
	if (num < 0)
		printf("0\n");
	else
	{
		int coins[] = {1, 5, 10, 25, 100};
		for ( i = 0; i < 5; 

	return (sum);
}
