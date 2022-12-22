#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

/**
 * You can only write one statement
 * You are not allowed to use ,
 * You are not allowed to code anythin
 * Your code should be written at line 19
 * You are allowed to use the standard library
 */
	*(p + 5) = 98; /* this prints 98\n */
		printf("a[2] = %d\n", a[2]);
		return (0);
}
