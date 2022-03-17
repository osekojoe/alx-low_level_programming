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

	n = 48; /* ascii values used */
	while (n <= 57)
	{
		if (n != 50 && n != 52)
			{
				_putchar(n);
			}
	n++;
	}
	_putchar('\n');
}

