#include <stdio.h>

/**
 * main - prints alphabet
 * description: prints alphabet il lower case using putchar function
 * Return: Always 0
 */
int main(void)
{
        int n = 123;

        while (n < 97)
        {
                putchar(n);
                n--;
        }
        putchar('\n');

        return (0);
