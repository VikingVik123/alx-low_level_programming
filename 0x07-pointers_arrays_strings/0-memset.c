#include "main.h"

/**
 *_memset - Entry point
 *@s:value to fill into n
 *@n:int memory to be flled
 *@b: constant byte
 *return: s if successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
