#include <stdio.h>

/**
 * swap - Swaps two elements in an array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */
void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

/**
 * partition - Partitions the array using the Lomuto partition scheme
 * @array: Pointer to the array
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 * Return: Index of the pivot element after partitioning
 */
int partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

/**
 * quicksort - Sorts the array using the Quick sort algorithm
 * @array: Pointer to the array
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 */
void quicksort(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);

	print_array(array, high - low + 1);
	quicksort(array, low, pivot - 1);
        quicksort(array, pivot + 1, high);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort(array, 0, size - 1);
}
