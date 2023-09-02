#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if large endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
