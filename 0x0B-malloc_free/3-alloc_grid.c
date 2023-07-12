#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a 2 dimension
 * array of integer.
 * @width: width
 * @height: height
 * Return: returns pointer of dimensions, NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **area;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	area = malloc(sizeof(int *) * height);
	if (area == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		area[x] = malloc(sizeof(int) * width);
		if (area[x] == NULL)
		{
			for (; x >= 0; x--)
				free(area[x]);
			free(area);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			area[x][y] = 0;
	}
	return (area);
}
