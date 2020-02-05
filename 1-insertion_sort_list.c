#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sort a double list by insertion
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;

	if ((*list)->next)
		(*list) = (*list)->next;

	while ((*list))
	{

		while ((*list)->prev && ((*list)->n < (*list)->prev->n))
		{
			if ((*list)->next)
			{
				(*list)->next->prev = (*list)->prev;
				(*list)->prev->next = (*list)->next;
			}
			else
			{
				(*list)->prev->next = NULL;
			}
			(*list)->next = (*list)->prev;
			if ((*list)->prev->prev)
			{
				(*list)->prev = (*list)->next->prev;
				(*list)->prev->next = (*list);
			}
			else
			{
				(*list)->prev = NULL;
				aux = (*list);
			}
			(*list)->next->prev = (*list);
			print_list(aux);
		}
		(*list) = (*list)->next;
	}
	*list = aux;
}
