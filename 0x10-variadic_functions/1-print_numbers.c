#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;

	va_start(list, b);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf('\n');

	va_end(list);
}
