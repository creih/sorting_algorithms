nclude <stdio.h>

/**
 *  * swap - Swaps two elements in an array
 *   * @a: Pointer to the first element
 *    * @b: Pointer to the second element
 *     */
void swap(int *a, int *b)
{
	    int temp = *a;
	        *a = *b;
		    *b = temp;
}

/**
 *  * shell_sort - Sorts an array of integers in ascending order using Shell sort
 *   *              algorithm with Knuth sequence
 *    * @array: Pointer to the array
 *     * @size: Size of the array
 *      */
void shell_sort(int *array, size_t size)
{
	    size_t gap = 1;
	        size_t i, j;

		    // Calculate the initial gap using Knuth sequence
		    //     while (gap < size / 3)
		    //             gap = gap * 3 + 1;
		    //
		    //                 // Reduce gap over multiple passes
		    //                     for (; gap > 0; gap /= 3)
		    //                         {
		    //                                 // Perform insertion sort for elements at a given gap
		    //                                         for (i = gap; i < size; i++)
		    //                                                 {
		    //                                                             int temp = array[i];
		    //                                                                         // Insert array[i] into the sorted sequence array[0..i-gap]
		    //                                                                                     for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
		    //                                                                                                 {
		    //                                                                                                                 array[j] = array[j - gap];
		    //                                                                                                                             }
		    //                                                                                                                                         array[j] = temp;
		    //                                                                                                                                                 }
		    //                                                                                                                                                         // Print array after each gap reduction
		    //                                                                                                                                                                 print_array(array, size);
		    //                                                                                                                                                                     }
		    //                                                                                                                                                                     }
