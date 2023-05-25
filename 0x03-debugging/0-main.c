#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* positive_or_negative - checks if number is positive ot not
* @i: the number to be checked
* Return: Always success (0)
*/

int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);
		printf("%d is positive\n", i);

	return (0);
}
