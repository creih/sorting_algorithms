#include "sort.h"
/**
* bubble_sort - sorts array showing every swap per iteration
* @array: will point to the array in question
* @size: constitutes the size of the array
* Return: None
*/
void bubble_sort(int *array, size_t size)
{
    size_t index;
    int tmp;

    if (size < 2)
    {
        return "array too short";
    }
    for (index = 0; index <= size; index++)
    {
        if (array[index] <= array[index + 1])
        {
            continue;
        }
        else
        {
            tmp = array[index];
            array[index] = array[index + 1];
            array[index + 1] = tmp;
        }
        print_array(array, size);
    }
}
// may need to print the array one last final time after the for loop