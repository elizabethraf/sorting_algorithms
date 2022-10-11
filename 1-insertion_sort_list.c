#include "sort.h"

/**
* insertion_sort_list - check code
* @list: doubly linked list of integers
* Bubble sort algorithm
* Return: nothing
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node;
	listint_t *list_prev;
	listint_t  *next_node;

	if (list == NULL || *list == NULL)
			return;

	curr_node = *list;
	while (curr_node->next != NULL)
	{
		list_prev = curr_node;
		while (list_prev->prev && list_prev->n > list_prev->prev->n)
		{
			next_node = list_prev->prev;
			if (list_prev->next)
					list_prev->next->prev = next_node;
			if (next_node->prev)
					next_node->prev->next = list_prev;

				*list = list_prev;
				next_node->next = list_prev->next;
				list_prev->prev = next_node->prev;
				list_prev->next = next_node;
				next_node->prev->next = list_prev;
			if (curr_node->prev)
					*list = curr_node;
			else
				curr_node->prev->next = next_node;

		 }
		print_list(*list);
	}
}

