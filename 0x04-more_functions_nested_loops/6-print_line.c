#include "main.h"

/**
 * print_line - Print line
 * Description: draws a straight line in the terminal
 * @n: Length of the line
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
