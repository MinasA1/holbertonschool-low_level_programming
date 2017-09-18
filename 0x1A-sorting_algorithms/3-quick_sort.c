#include "sort.h"

/**
 * partition - partitions the array
 * @arr: array to partition
 * @low: lowest index
 * @high: highest index
 * @size: array size
 * Return: new low index
 */
int partition(int *arr, int low, int high, size_t size)
{
	int j, t, pivot = arr[high], i = low;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			if (arr[j] != arr[i])
			{
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[high])
	{
		t = arr[i];
		arr[i] = arr[high];
		arr[high] = t;
		print_array(arr, size);
	}
	return (i);
}

/**
 * qs - recursive implementation of quicksort
 * @arr: array to sort
 * @low: lowset index
 * @high: highest index
 * @size: size of array
 */
void qs(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		qs(arr, low, pi - 1, size);
		qs(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
