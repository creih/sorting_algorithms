#include <stdio.h>
#include <stdlib.h>

/**
 *  * counting_sort - Sorts an array of integers in ascending order using Counting sort
 *   * @array: Pointer to the array
 *    * @size: Size of the array
 *     */
void counting_sort(int *array, size_t size)
{
	    if (array == NULL || size < 2)
		            return;

	        // Find the maximum element in the array
		//     int max = array[0];
		//         for (size_t i = 1; i < size; i++)
		//             {
		//                     if (array[i] > max)
		//                                 max = array[i];
		//                                     }
		//
		//                                         // Create a counting array of size max + 1 and initialize all elements to 0
		//                                             int *count = calloc(max + 1, sizeof(int));
		//                                                 if (count == NULL)
		//                                                         return;
		//
		//                                                             // Count occurrences of each number in the input array
		//                                                                 for (size_t i = 0; i < size; i++)
		//                                                                     {
		//                                                                             count[array[i]]++;
		//                                                                                 }
		//
		//                                                                                     // Print the counting array
		//                                                                                         printf("Counting array:");
		//                                                                                             for (int i = 0; i <= max; i++)
		//                                                                                                 {
		//                                                                                                         printf(" %d", count[i]);
		//                                                                                                             }
		//                                                                                                                 printf("\n");
		//
		//                                                                                                                     // Update the counting array to contain the cumulative sum of counts
		//                                                                                                                         for (int i = 1; i <= max; i++)
		//                                                                                                                             {
		//                                                                                                                                     count[i] += count[i - 1];
		//                                                                                                                                         }
		//
		//                                                                                                                                             // Create a temporary array to store the sorted output
		//                                                                                                                                                 int *output = malloc(size * sizeof(int));
		//                                                                                                                                                     if (output == NULL)
		//                                                                                                                                                         {
		//                                                                                                                                                                 free(count);
		//                                                                                                                                                                         return;
		//                                                                                                                                                                             }
		//
		//                                                                                                                                                                                 // Fill the output array using the counting array
		//                                                                                                                                                                                     for (int i = size - 1; i >= 0; i--)
		//                                                                                                                                                                                         {
		//                                                                                                                                                                                                 output[count[array[i]] - 1] = array[i];
		//                                                                                                                                                                                                         count[array[i]]--;
		//                                                                                                                                                                                                             }
		//
		//                                                                                                                                                                                                                 // Copy the sorted elements back to the input array
		//                                                                                                                                                                                                                     for (size_t i = 0; i < size; i++)
		//                                                                                                                                                                                                                         {
		//                                                                                                                                                                                                                                 array[i] = output[i];
		//                                                                                                                                                                                                                                     }
		//
		//                                                                                                                                                                                                                                         // Free allocated memory
		//                                                                                                                                                                                                                                             free(count);
		//                                                                                                                                                                                                                                                 free(output);
		//                                                                                                                                                                                                                                                 }
