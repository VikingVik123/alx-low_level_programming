#include "main.h"
#include <stdlib.h>

/**
 ***alloc_grid - creates 2D array
 *@width: size of grid
 *@height: size of  grid
 *Return: 0 or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (m = 0; m <= i; m++)
				free(arr[m]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (m = 0; m < width; m++)
		{
			arr[i][m] = 0;
		}
	}
	return (arr);
}
