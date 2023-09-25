#include <stdlib.h>

/**
 * array_range - Create array of integers
 * @min: The first element of the range
 * @max: The last elements of the range
 *
 * Return: Pointer to the array with the integers of the range
 * NULL if allocation failed
 * NULL if min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (arr);
	for (i = 0; i + min <= max; i++)
		arr[i] = min + i;
	return (arr);
}
