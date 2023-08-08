#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars
*@c: char
*@size: size of array to create
*Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char x;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (i < size)
	{
		*(x + i) = c;
		i++;
	}

	*(x + i) = '\0';

	return (x);
}
