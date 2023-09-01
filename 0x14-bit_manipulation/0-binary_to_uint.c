#include "main.h"

/*
 * unsigned int binary_to_uint(const char *b) - converts binary to decimal
 * @b : pointer to string of char
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec = 2 * dec + (b[x] - '0');
	}
	return (dec);
}
