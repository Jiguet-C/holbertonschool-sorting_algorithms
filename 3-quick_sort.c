#include "sort.h"

/**
 * quick_sort - sorts an array of integers using the Quick sort algorithm
 * @array: Print, after each time you swap two elements
 * @size: Size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	size_t indexArray;
	size_t indexFrontier;
	int pivot;
	int temp;

	pivot = array[size - 1];
	indexFrontier = 0;

	for (indexArray = 0; indexArray < size - 1; indexArray++)
	{
		if (array[indexArray] <= pivot)
		{
			temp = array[indexFrontier];
			array[indexFrontier] = array[indexArray];
			array[indexArray] = temp;
			print_array(array, size);
			indexFrontier++;
		}
	}

	temp = array[indexFrontier];
	array[indexFrontier] = array[size - 1];
	array[size - 1] = temp;
	print_array(array, size);
}
