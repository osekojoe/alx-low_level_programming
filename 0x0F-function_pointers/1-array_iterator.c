#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a fn given as a parameter on each array element
* @array: pointer to the array
* @size: size of the array
* @action: pointer to the function
* Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
