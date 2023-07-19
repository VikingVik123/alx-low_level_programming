#include "main.h"
/**
 *print_alphabet_x10: Entry point
 *Description:print_alphabet_x10 Prints a-z x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int j;

	for (n = 1; n <= 10; n++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
