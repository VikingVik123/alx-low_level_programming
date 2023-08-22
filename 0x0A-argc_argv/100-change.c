#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: no of arguments
 * @argv: array arguments
 * Return: 0 if Successful
 */
int main(int argc, char *argv[])
{
	int a, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	result = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && a >= 0; x++)
	{
		while (a >= coins[x])
		{
			result++;
			a -= coins[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
