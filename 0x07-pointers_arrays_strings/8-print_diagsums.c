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
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + size * i + i);
		sum_2 += *(a + size * (i + 1) - i - 1);
	}
	printf("%d, %d\n", sum_1, sum_2);
}
