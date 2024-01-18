#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order and prints every swap.
 *
 * @arr: Array of integers to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *arr, size_t size)
{
	size_t i, current_size = size;
	int temp, is_sorted = 1;

	while (current_size)
	{
		is_sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				is_sorted = 0;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				print_array(arr, size);
			}
		}
		if (is_sorted == 1)
			break;
		current_size--;
	}
}
