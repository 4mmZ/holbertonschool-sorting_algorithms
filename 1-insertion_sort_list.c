#include "sort.h"
/**
 * insertion_sort_list - function algortim that sort a list
 * using insertion sort
 * @list: the list that will be being sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (!list || !(*list))
		return;

	for (current = *list; current; current = current->next)
	{
		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);

		}
	}
}
