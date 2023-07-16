#include <stdio.h>
#include <stdlib.h>

/**
*main - Print Alphabets
*Return: 0 (Success)
*/

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
