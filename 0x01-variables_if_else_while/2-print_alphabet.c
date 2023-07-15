#include <stdio.h>
#include <stdlib.h>

/**
*main - Print Alphabets
*Return: 0 (Success)
*/

int main(void)
{
int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
