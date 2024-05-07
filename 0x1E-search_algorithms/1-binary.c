#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                  using the binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where the value is located, or -1 if value is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;

	while (l <= r)
	{
		size_t mid = l + (r - l) / 2;

		if (array[mid] == value)
		{
			return mid; /* Value found, return index*/
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else /* value > array[mid]*/
		{
			l = mid + 1;
		}
	}
	return -1; /*Value not found, return -1*/
}
