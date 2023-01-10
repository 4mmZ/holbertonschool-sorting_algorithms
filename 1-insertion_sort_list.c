#include "sort.h"

/**
 *
 *rev > swap->prev
 * while (swap < rev->next)
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *sorted, *curr, *next, *aux, *temp;

        sorted = NULL;
        curr = *list;

        while (curr != NULL)
        {
                next = curr->next;

                if (sorted == NULL || sorted->n > curr->n)
                {
                        curr->next = sorted;
                        sorted = curr;
			print_list(*(list));
                } else
                {
                        aux = sorted;
			print_list(*(list));

                        while (aux->next != NULL && aux->next->n <= curr->n)
				aux = aux->next;

                        if (aux->next == NULL)
                        {
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = NULL;
				print_list(*(list));
                        } else
                        {
                                temp = aux->next;
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = temp;
                                temp->prev = curr;
				print_list(*(list));
                        }
                }

                curr = next;
		print_list(*(list));
        }
        *list = sorted;
	/**
	listint_t *sorted, *current, *aux, *temp;

	*sorted = NULL;
	*current = *list;

	while (current != NULL)
	{
		next = current->next;




}
