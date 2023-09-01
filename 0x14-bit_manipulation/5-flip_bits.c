#include "main.h"
/*
 * flip_bits - number of bytes needed to flip from 1 no 2 another
 * @n: int value
 * @m: int value
 * Return: 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int x, count = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			count++;
	}

	return (count);
}
