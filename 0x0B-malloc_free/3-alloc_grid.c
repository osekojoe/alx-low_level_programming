#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid -  returns a pointer to a 2d array of integers.
* @width: array width
* @height: array height
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* Return: If width or height is 0 or negative, return NULL
*/
int **alloc_grid(int width, int height)
{
	int **rows, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = rows = malloc(sizeof(int *) * height);
	if (rows == 0)
		return (NULL);
	while (height--)
	{
		int *cols = malloc(sizeof(int) * width);
		int i = width;

		if (cols == 0)
		{
			i = 0;
			while (arr + i != rows)
				free(arr[i++]);
			free(arr);
			return (NULL);
		}
		while (i--)
			*cols++ = 0;
		*rows++ = cols - width;
	}
	return (arr);
}
