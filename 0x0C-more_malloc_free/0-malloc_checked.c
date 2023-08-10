#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - Entry point
 *@b: int value
 *Return: n if successful
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
