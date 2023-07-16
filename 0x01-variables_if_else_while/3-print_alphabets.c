#include <stdio.h>
#include <stdlib.h>

/**
*main - Print Alphabets
*Return: 0 (Success)
*/

int main(void)
{
int n = 97;
int x = 41;

while	(n < 123)
	{
		putchar(n);
		n++;
	}
while	(x < 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
