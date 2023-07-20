#include "main.h"
/**
*int print_sign - Entry point
*Description: Prints sign of numbers
*@n: int value to check
*Return: 0 success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n')
}
