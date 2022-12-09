#include <stdio.h>
/**
 * main - Prints a size of data type
 * Return: Always 0 (Sucsess)
*/
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
