#include "main.h"
/**
*_strcpy - Entry point
*@dest : input value
*@src : input value
*return : 0 if successful
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;
	
	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
