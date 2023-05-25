#include "main.h"

/**
 * positive_or_negative - prints if number is positive or negative
 * Desccription: Prints if the random number is zero positive or negative
 * Return: Always 0
*/
int main(void)
{
	int i;

        if (i > 0)
                printf("%d is positive\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
        else
                printf("%d is zero\n", i);
        return (0);
}
