#include "main.h"
/**
* _strcat - function to combine strings
* @src :string to add
* @dest : character to be attached to
* return :combined string if successful
*/

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
