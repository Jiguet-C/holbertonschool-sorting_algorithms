#include "sort.h"

/**
 * lomuto_partition - Partition the array using the Lomuto partition scheme
 * @array: The array to partition
 * @start: The starting index of the partition
 * @end: The ending index of the partition
 * @size: The size of the array
 *
 * Return: The final position of the pivot element.
 */
int lomuto_partition(int *array, int start, int end, int size)
{
	int indexArray;
	int indexFrontier;
	int pivot;
	int temp;

	pivot = array[end];
	indexFrontier = start;
	for (indexArray = start; indexArray < end; indexArray++)
	{
		if (array[indexArray] <= pivot)
		{
			if (indexFrontier != indexArray)
			{
				temp = array[indexFrontier];
				array[indexFrontier] = array[indexArray];
				array[indexArray] = temp;
				print_array(array, size);
			}
			indexFrontier++;
		}
	}
	if (indexFrontier != end)
	{
		temp = array[indexFrontier];
		array[indexFrontier] = array[size - 1];
		array[size - 1] = temp;
		print_array(array, size);
	}
	return (indexFrontier);
}

/**
 * quick_sort_recursive - recursively sorts an array of integers
 * using the quicksort algorithm.
 * @array: array of integers to be sorted.
 * @start: starting index of the sublist to be sorted.
 * @end: ending index of the sublist to be sorted.
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort_recursive(int *array, int start, int end, int size)
{
	int pivot;

	if (start < end)
	{
		pivot = lomuto_partition(array, start, end, size);
		quick_sort_recursive(array, start, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick sort algorithm
 * @array: Print, after each time you swap two elements
 * @size: Size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL || size > 2)
		quick_sort_recursive(array, 0, size - 1, size);
}
