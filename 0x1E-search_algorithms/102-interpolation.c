#include "search_algos.h"

/*
 * interpolation_search - internpolation search aligorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index or -1 if value in not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, 
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

}
