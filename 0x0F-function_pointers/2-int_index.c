#include <stddef.h>

/**
 * int_index - Search for an integer
 * @array: Array to search in
 * @size: Size of array
 * @cmp: Function to use for search
 *
 * Return: Index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
