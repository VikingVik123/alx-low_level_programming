#include "main.h"
/**
*print_last_digit - Entry point
*Description: Prints sign of numbers
*@i: int value to check
*Return: 0 success
*/

int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return(l);
	}
}
