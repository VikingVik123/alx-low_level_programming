#include "main.h"
/**
 * print_rev - prints string in reverse
 * @*s : string
 * @s : string
 * return : reverse of string successful
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
