#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: arg count
 *@argv: arg vector
 *@coun: int value
 *Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
