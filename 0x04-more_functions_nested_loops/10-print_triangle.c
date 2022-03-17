#include "main.h"

/**
 * print_triangle - Prints a triangle
 * Description: Prints a triangle of #
 * @size: Length of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
