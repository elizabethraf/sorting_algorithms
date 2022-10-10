#include "sort.h"

/**
* insertion_sort_list - check code
* @list: doubly linked list of integers
* Bubble sort algorithm
* Return: nothing
**/
void insertion_sort_list(listint_t **list)
{
	size_t a;
	int key = 0;
	size_t b;

	for (a = 1; a < list; a++)
	{
		int key = a[b];
		int b = a - 1;

		while (b >= 0 && a[b] > key)
		{
			a[b + 1] = a[b];
			b = b - 1;
		}
		a[b + 1] = key;
	}
}


