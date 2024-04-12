#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: Print, after each time you swap two elements
 * @size: Size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t index;
	size_t idx;
	size_t min_index;

	if (array == NULL || size == 0)
		return;

	for (index = 0; index < size - 1; index++)
	{
		min_index = index;

		for (idx = index + 1; idx < size; idx++)
		{
			if (array[idx] < array[min_index])
				min_index = idx;
		}

		if (min_index != index)
		{
			temp = array[index];
			array[index] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
