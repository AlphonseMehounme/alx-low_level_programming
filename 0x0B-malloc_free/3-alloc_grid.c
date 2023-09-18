#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: A pointer to the array if successful
 * NULL on failure
 * NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (p);
	}
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (p);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			return (p);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
