#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index of value
 * or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, mid = 0, idx = 0;

	if (!array || size == 0)
		return (-1);

	right = size - 1;

	while (left < right)
	{
		idx = 0;
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
			if (idx == right)
			{
				printf("%d\n", array[right]);
				break;
			}
			else
				printf("%d, ", array[idx]);
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
