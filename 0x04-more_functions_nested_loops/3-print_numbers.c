#include "main.h"
/**
 * print_numbers - check for digit
 * Description: prints the digits (0 through 9)
 * Return: always returns 0 (success)
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
