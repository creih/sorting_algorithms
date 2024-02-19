#include "sort.h"
/**
* bubble_sort - sorts array showing every swap per iteration
* @array: will point to the array in question
* @size: constitutes the size of the array
* Return: None
*/
void bubble_sort(int *array, size_t size)
{
    size_t index, tambuka;
    int tmp;
    bool exch;

    if (size < 2 || array == NULL)
    {
        return;
    }
    for (tambuka = 0; tambuka < size - 1; tambuka ++)
    {
        exch = false;
        for (index = 0; index < size - 1 - tambuka; index++)
        {
            if (array[index] > array[index + 1])
            {
                tmp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = tmp;
                print_array(array, size);
                exch = true;
            }
        }
        if (exch == false)
        break;
    }
}
