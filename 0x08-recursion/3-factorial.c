#include <stdio.h>
#include "main.h"

/**
 *factorial(int n) - Entry point
 *@n: integer value
 *Return: factorial of n if successful
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	int n;
	printf("%d\n", n);
	return (0);
}
