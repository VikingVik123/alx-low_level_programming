#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Addition fxn
 * @n: integer arg
 *
 * Return: sum of all args passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int a;
	int sum = 0;

	va_start(list, n);

	for (a = 0, a < n; a++)
	{
		sum += va_arg(list, int);
	}
	va_end(list, n);
	return (sum);
}
