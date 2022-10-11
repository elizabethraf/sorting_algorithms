#include "sort.h"

/**
* quick_sort - check the code
* @size: sorts an array of integers
* @array: sorts an array of integers
* sort algorithm
**/
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (array < size)
