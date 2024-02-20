#include "sort.h"

/**
 *  * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *   *                        using the Insertion sort algorithm
 *    * @list: Pointer to a pointer to the head of the list
 *     */
void insertion_sort_list(listint_t **list)
{
	    if (list == NULL || *list == NULL || (*list)->next == NULL)
		            return;

	        listint_t *current = (*list)->next; // Start from the second node
		    listint_t *prev;

		        while (current != NULL)
				    {
					            prev = current->prev;
						            while (prev != NULL && prev->n > current->n)
								            {
										                // Swap current and prev nodes
												//             if (prev->prev != NULL)
												//                             prev->prev->next = current;
												//                                         if (current->next != NULL)
												//                                                         current->next->prev = prev;
												//
												//                                                                     prev->next = current->next;
												//                                                                                 current->prev = prev->prev;
												//                                                                                             prev->prev = current;
												//                                                                                                         current->next = prev;
												//
												//                                                                                                                     // Update list pointer if necessary
												//                                                                                                                                 if (current->prev == NULL)
												//                                                                                                                                                 *list = current;
												//
												//                                                                                                                                                             // Print list after each swap
												//                                                                                                                                                                         print_list(*list);
												//
												//                                                                                                                                                                                     // Update prev to check previous elements
												//                                                                                                                                                                                                 prev = current->prev;
												//                                                                                                                                                                                                         }
												//                                                                                                                                                                                                                 // Move to the next node
												//                                                                                                                                                                                                                         current = current->next;
												//                                                                                                                                                                                                                             }
												//                                                                                                                                                                                                                             }
