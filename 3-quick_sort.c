#include "sort.h"

/**
* quick_sort - check the code
* @size: sorts an array of integers
* @array: sorts an array of integers
* sort algorithm
**/
void quick_sort(int *array, size_t size)
{
	int lo;
	size_t high;
	size_t pivot;

	if (array == NULL || size < 1)
		return;
	lo = 0;
	high = size - 1;

	pivot = (array, lo, high, size);
	quicksort(array, lo, pivot - 1, size);
	quicksort(array, pivot + 1, high, size);
}

/**
* lomuto - check the code
* @size: sorts an array of integers
* @array: sorts an array of integers
* @high: list of intergers
* @lo: list of integers
* sort algorithm
**/
size_t lomuto(int *array, size_t lo, size_t high, size_t size)
{
	int len = 0;
	int i = 0, a = 0;
	size_t tmp;

	len = array[high];
	i = lo - 1;

	for (a = lo; a <= high; a++)
	{
		if (array[a] < len)
		{
			i += 1;
			if (i != a)
			{

				tmp = array[i];
				array[i] = array[a];
				array[a] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
* lomuto - check the code
* @size: sorts an array of integers
* @array: sorts an array of integers
* @high: list of intergers
* @lo: list of integers
* sort algorithm
**/
void quicksort(int *array, size_t lo, size_t high, size_t size)
{
	size_t pivot;

	if (lo < high)
	{
		pivot = partition(array, lo, high, size);
		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);

	}
}
