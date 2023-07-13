#include "main.h"
#include <ctype.h>

/**
 * arg_check - checks if a digit in the number
 * @m: the string passed
 * Return: 0 the string is num else 1
 */
int arg_check(char *m)
{

	while (*m != '\0')
	{
		if (!isdigit(*m))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/**
 * main - adds the args if they are numbers
 * @argc: The number of arguments
 * @argv: Arguments vector
 * Return: 0 if success else 1
 */
int main(int argc, char *argv[])
{
	int k = 1;
	int sum = 0;
	int num;
	char *t;

	while (k < argc)
	{
		t = argv[k];
		if (arg_check(t))
		{
			num = atoi(t);
			sum  += num;
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
