#include "sort.h"
/**
 * counting_sort - Sorts array of ints in asc order Counting sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int i, *count, max, *output;
	size_t ir;

	if (array == NULL || size < 2)
		return;
	max = array[0];
	for (ir = 1; ir < size; ir++)
	{
		if (array[ir] > max)
			max = array[ir];
	}
	count = calloc(max + 1, sizeof(int));
	if (count == NULL)
		return;
	for (ir = 0; ir < size; ir++)
	{
		count[array[ir]]++;
	}
	printf("Counting array:");
	for (i = 0; i <= max; i++)
	{
		printf(" %d", count[i]);
	}
	printf("\n");
	for (i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	output = malloc(size * sizeof(int));
	if (output == NULL)
	{
		free(count);
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (ir = 0; ir < size; ir++)
	{
		array[ir] = output[ir];
	}
	free(count);
	free(output);
}
