#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
	printf("size of a char: %i byte(S)\n", sizeof(char));
	printf("size of an int: %i byte(S)\n", sizeof(int));
	printf("size of a long int: %i byte(S)\n", sizeof(long int));
	printf("size of a long long int: %i byte(S)\n", sizeof(long long));
	printf("size of a float: %i byte(S)\n", sizeof(float));
	return (0);
}
