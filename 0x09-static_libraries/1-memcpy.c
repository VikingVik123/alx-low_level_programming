#include "main.h"
/**
*_memcpy - copies memory values
*@desc : destination
*@src : value to copy
*@n : int value
*return : dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
