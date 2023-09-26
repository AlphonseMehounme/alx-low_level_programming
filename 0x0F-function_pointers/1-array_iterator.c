#include <stddef.h>

/**
 * array_iterator - Run action on array elements
 * @array: Array
 * @size: Array size
 * @action: Function to run
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
