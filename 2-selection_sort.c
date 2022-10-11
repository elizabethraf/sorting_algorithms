#include "sort.h"

/**
* selection_sort - check code
* @array: sorts an array of integers
* @size: sorts size of intergers
* sorting_algorithms
**/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t a;
	int temp;

	for (i = 0; i < size - 1; a++)
	{
		temp = array[i];
		for (a = i + 1; a <= size; a++)
		{
			if (array[i] < array[temp])
			{
				temp = i;
			}
		}

        if (temp != array[i])
		{
         	temp = array[i];
			array[i] = temp;
			array[a] = a;
			print_array(array, size);
        }
    }

    return;
}
