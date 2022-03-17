#include "main.h"

/**
 * print_square - Prints a square
 * Description: Prints a square of # n-times
 * @size: Length of the square
 * Return: none
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
