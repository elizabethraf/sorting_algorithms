#include "sort.h"

/**
* bubble_sort - check code
* @size: sorts an array of integers
* Bubble sort algorithm
* @array: sort algorithm
* Return: nothing
**/
void bubble_sort(int *array, size_t size)
{
	size_t a;
	int temp = 0;
	size_t b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - 1); b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
