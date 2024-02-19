# include "sort.h"
/**
 * selection_sort - a custom implementation of selection sort
 * @array: this is the array in question
 * @size: this is the size of the function
 * Return: None at all
*/
void selection_sort(int *array, size_t size)
{
    int tmp = 0;
    size_t index, index_nbr = 0, index_to_sub;

    while (index_nbr < size)
    {
        for (index = 0; index < size; index++)
        {
            if (tmp > array[nbr])
            {
                index_to_sub = nbr;
                tmp = array[nbr];
            }
            array[index_to_sub] = array[index];
            array[index] = tmp;
            print_array(array, size);
        }
        index_nbr++;
    }
}