#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: Print, after each time you swap two elements
 * @size: Size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;

	if (array == NULL || size < 2)
		return;

	for (size_t index = 0; index < size - 1; index++)
	{
		for (size_t idx = 0; idx < size - index - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
