#include "main.h"

/**
 *_memcpy - Entry point
 *@dest: destination for copied value
 *@src: origin of the copied value
 *@n: amount of memory
 *return: dest if successful
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
