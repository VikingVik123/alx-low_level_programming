#include <stdio.h>
#include <stdlib.h>

/**
*main - Print Alphabets
*Return: 0 (Success)
*/

int main(void)
{
int n = 97;
int x = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
