#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * print_numbers - fxn that prints numbers
 * @n: no of integers
 * @seperator: string to be printed
 * @...: variable 2 be printed
 *Return: printed string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(list, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf('\n');

	va_end(list);
}
