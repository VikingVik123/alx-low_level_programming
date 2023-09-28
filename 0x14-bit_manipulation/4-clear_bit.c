#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number
 * @index: index position to change
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int value;

	if (index > 64)
		return (-1);
	value = index;
	for (i = 1; value > 0; i *= 2, value--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
