#include "main.h"

/**
 * _marg - prints the number of arguments passed
 * @argc - The number of arguments
 * @argv: The pointer to strings of arguments
 */
void _marg(int argc, char *argv[])
{
	int i = 0;

	while (*argv != '\0')
	{
		i++;
	}
}
int main(int argc, char *argv[])
{
	int count;
	char *myargv[] = {"c", "is", "my", "best", "language"};

	_marg(a, myargv);
	return (0);
}
