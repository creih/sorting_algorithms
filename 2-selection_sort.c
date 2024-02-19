#include "sort.h"
/**
 * selection_sort - implememts the logic behind selection sort algorithm
 * @array: array ptr to be sorted
 * @size: this sis the size of the array
 * Return: None in any case
 */
void selection_sort(int *array, size_t size)
{
	size_t index, element;
	int muto, swap;

	if (array == NULL || size < 2)
		return;
	for (element = 0; element < size - 1; element++)
	{
		swap = 0;
		muto = array[element];
		for (index = element; index < size; index++)
		{
			if (array[index] < muto)
			{
				muto = array[index];
				swap = index;
			}
		}
		if (swap != 0)
		{
			array[swap] = array[element];
			array[element] = muto;
			print_array(array, size);
		}
	}
}
