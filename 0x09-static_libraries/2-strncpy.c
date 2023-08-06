#include "main.h"
/**
*_strncpy - Entry point
*@dest : input value
*@src : input value
*@n : int value
*return : dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	j = 0;
	
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
