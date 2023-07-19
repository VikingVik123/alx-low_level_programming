#include "main.h"
/**
*main - Entry point
*Description: Print Alphabet
*Return: 0 success
*/
char n;
void print_alphabet(void);
{
	for (n = 97; n <= 122; n++;)
	{
		_putchar(n);
		_putchar('\n');
	}
	return (0);
}
