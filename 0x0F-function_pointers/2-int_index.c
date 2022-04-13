#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: pointer to the array
* @size: size of array
* @cmp: pointer to the function used to compare values
* Return: -1 if no element matches, -1 if size <= 0
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size != 0 && cmp != NULL)
		while (i < size)
		{
			if(cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
