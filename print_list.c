#include "sort.h"
/**
 * print_list - print the doubly linked list conetnts
 * @list: ptr to the list
 */
void print_list(const listint_t *list)
{
	int i = 0;

	while (list)
	{
		if (i > 0)
			print(", ");
		print("%d", listr->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
