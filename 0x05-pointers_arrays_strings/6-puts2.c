#include "main.h"

/**
 * puts2 - prints one char of a string
 * @str: string to print the chars from
 * return : 1 char 
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
