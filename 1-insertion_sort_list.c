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

	curr_node = (*list)->next;
	while ((curr_node != NULL) && (curr_node->prev != NULL))
	{
		 next_node = curr_node;
		 list_prev = curr_node->prev;
		while ((list_prev != NULL) && (curr_node->n > next_node->n))
		{
			if (curr_node != NULL)
				list_prev = curr_node->prev;

			if (list_prev->prev != NULL)
				list_prev = list_prev->prev;
		}

		if (next_node != NULL)
			curr_node->next = next_node;

		*list = curr_node;
		curr_node->next = next_node->next;
		curr_node->prev = next_node;
		next_node->next = curr_node;
		next_node->prev = list_prev;

		print_list(*list);
	}
}

