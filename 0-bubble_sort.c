#include "sort.h"
/**
 * bubble_sort - this is implementation of bubble sort algorithm
 * @array: this is ptr to the array
 * @size: this is the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t tambuka, index;
	bool exch;

	if (array == NULL || size < 2)
		return;
	for (tambuka = 0; tambuka < size - 1; tambuka++)
	{
		exch = false;
		for (index = 0; index < size - tambuka - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				exch = true;
				print_array(array, size);
			}
		}
		if (exch == false)
			break;
	}
}
