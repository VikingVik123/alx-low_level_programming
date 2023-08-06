#include "main.h"
/**
*_strncat - concatenates strings
*@dest : destination
*@src : destination to pull from
*@n : input value
*return : dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	i = 0;
	
	while (dest[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
