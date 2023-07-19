#include "main.h"
/**
 * main - check the code.
 *void print_alphabet_x10: print a-z x10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n;
	int j;

	for (j = 1; n <= 10; n++)
	{
		for (j = 97; j <=122; j++)
		{
			putchar(j);
		}
		_putchar('\n');
	}
}
