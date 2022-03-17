#include "main.h"
/**
 * print_most_numbers - prints digits
 * Description: prints the digits (0 through 9)
 * except 2 and 4
 * Return: always returns 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}

