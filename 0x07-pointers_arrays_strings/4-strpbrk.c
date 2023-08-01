#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept:user defined input
 * Return: 0 if Successful
 */


char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
