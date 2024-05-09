#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t prev = 0;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		size_t next = prev + jump;

		if (next >= size)
			next = size - 1;

		printf("Value checked array[%u] = [%d]\n", next, array[next]);

		if (array[next] >= value)
			break;

		prev += jump;
	}
	printf("Value found between indexes [%u] and [%u]\n", prev, prev + jump);

	for (i = prev; i <= fmin(prev + jump, size - 1); ++i)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
