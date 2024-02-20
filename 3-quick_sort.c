#include "sort.h"
/**
 * swap - swaps unequal elements of array
 * @one: ptr to element 1
 * @two: ptr to element 2
 */
void swap(int *one, int *two)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition - divides the array using lomuto
 * @array: ptr to array
 * @low: first index
 * @high: last index
 * @size: the size of that array
 * Return: index of pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - this is for sorting the array
 * @array: ptr to the array
 * @low: starting index
 * @high: last index
 * @size: full size of the array
 */
void quicksort(int *array, int low, int  high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);		
	}
}
/**
 * quick_sort - this implements the quicksort
 * @array: this is pointer to the array to sort
 * @size: this is the size of array
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL || size < 2)
		return;
	quiocksort(array, 0, size - 1, size);
}
