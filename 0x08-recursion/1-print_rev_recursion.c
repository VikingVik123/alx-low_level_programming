#include <stdio.h>
#include "main.h"

/**
 *_print_rev_recursion -Entry point
 *@s : string
 *reurn : s - 1 if successful
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
