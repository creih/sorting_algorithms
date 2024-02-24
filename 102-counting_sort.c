#include <stdio.h>
#include <stdlib.h>

/**
 * counting_sort - Sorts an array of integers in ascending order using Counting sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output;

    if (array == NULL || size < 2)
        return;
	int max = array[0];
	for (size_t i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	count = calloc(max + 1, sizeof(int));
	if (count == NULL)
		return;
	for (size_t i = 0; i < size; i++)
	{
		count[array[i]]++;
	}
	printf("Counting array:");
	for (int i = 0; i <= max; i++)
	{
		printf(" %d", count[i]);
	}
	printf("\n");
	for (int i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	output = malloc(size * sizeof(int));
	if (output == NULL)
	{
		free(count);
		return;
	}
	for (int i = size - 1; i >= 0; i--)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (size_t i = 0; i < size; i++)
	{
		array[i] = output[i];
	}
	free(count);
	free(output);
}
