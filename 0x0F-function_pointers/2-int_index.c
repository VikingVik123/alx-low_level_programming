#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to the comparison function
 * Return: index of element 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
