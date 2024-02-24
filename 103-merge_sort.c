#include <stdio.h>
#include <stdlib.h>

/**
 * merge - Merges two subarrays of array[].
 * @array: Pointer to the array
 * @left: Starting index of the left subarray
 * @mid: Middle index of the array
 * @right: Ending index of the right subarray
 * @temp: Temporary array to store the merged result
 */
void merge(int *array, int left, int mid, int right, int *temp)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= right)
        temp[k++] = array[j++];
    for (i = left; i <= right; i++)
        array[i] = temp[i];
}
/**
 * merge_sort_recursive - Recursive function to sort the array using Merge sort
 * @array: Pointer to the array
 * @left: Starting index of the subarray to be sorted
 * @right: Ending index of the subarray to be sorted
 * @temp: Temporary array to store the merged result
 */
void merge_sort_recursive(int *array, int left, int right, int *temp)
{
    int mid;

    if (left < right)
    {
        mid = left + (right - left) / 2;
        merge_sort_recursive(array, left, mid, temp);
        merge_sort_recursive(array, mid + 1, right, temp);
        merge(array, left, mid, right, temp);
    }
}
/**
 * merge_sort - Sorts an array of integers in ascending order using Merge sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void merge_sort(int *array, size_t size)
{
    int *temp;

    if (array == NULL || size < 2)
        return;
    temp = malloc(size * sizeof(int));
    if (temp == NULL)
        return;
    merge_sort_recursive(array, 0, size - 1, temp);
    free(temp);
}
