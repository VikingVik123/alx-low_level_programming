#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Fxn to print strings
 * @separator: string to be printed
 * @n:  no of strings
 * @...: variable number of strings to be printed.
 * Return: string or NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	char *str;


	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}

