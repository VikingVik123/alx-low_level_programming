#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@coun: int
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
