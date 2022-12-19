#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return: Always success
 */
int main(void)
{
	int score, total;

	srand(time(NULL));
	total = 0;
	while (total <= 2645)
	{
		score = (rand() % 128);
		total += score;
		printf("%c", score);
	}
	printf("%c", 2772 - total);
	return (0);
}
