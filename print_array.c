#include "sort.h"
/**
 * print_array - prints al;l content of array
 * @array: ptr to the array
 * @size: size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
