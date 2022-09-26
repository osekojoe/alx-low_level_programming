#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2d array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, principal_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				principal_sum += a[i][j];
			if ((i + j) == (size - 1))
				secondary_sum += a[i][j];
		}
	}
	printf("%d, %d\n", principal_sum, secondary_sum);
}
