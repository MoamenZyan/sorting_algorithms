#include "sort.h"

/**
 * insertion_sort_list - insertion algorithm function
 * @list: passed list
 * Return: Void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *backward;

	current = current->next;
	while (current != NULL)
	{
		backward = current->prev;
		while (backward != NULL && current->n < backward->n)
		{
			backward->next = current->next;
			if (current->next != NULL)
				current->next->prev = backward;
			current->next = backward;
			current->prev = backward->prev;
			if (backward->prev != NULL)
				backward->prev->next = current;
			else
				*list = current;
			backward->prev = current;
			backward = current->prev;
			print_list(*list);
		}
	current = current->next;
	}
}

