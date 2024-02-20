#include "sort.h"
/**
 * insertion_sort - sorts a doubly linked list using insertion sorting
 * @list: the list to sort
 * Return: None
 */
void insertion_sort(listint_t **list)
{
	bool hinduranya = false;
	int l_size = 0;

	if (list == NULL || list->next == NULL)
		return;
	while (list->next != NULL)
		l_size++;
	printf("%d", l_size);
}
