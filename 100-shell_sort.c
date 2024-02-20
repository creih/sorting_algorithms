#include "sort.h"
/**
 * shell_sort - Sorts an array ascending order using Shell sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
	    size_t gap = 1;
	        size_t i, j;

    while (gap < size / 3)
    gap = gap * 3 + 1;
    for (; gap > 0; gap /= 3)
    {
        for (i = gap; i < size; i++)
        {
            int temp = array[i];
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
        print_array(array, size);
    }
}
