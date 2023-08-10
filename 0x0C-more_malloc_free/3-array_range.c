#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **array_range - Entry point
 *@min: lowest value of range
 *@max: highest value of range
 *Return: a if successful
 */
int *array_range(int min, int max)
{
	int *a;
	int b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		a[b] = min++;

	return (a);
}
