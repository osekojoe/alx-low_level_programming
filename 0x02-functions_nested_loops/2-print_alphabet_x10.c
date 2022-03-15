#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: prints lowercase alphabet 10 times and a new line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n;
	char alphabet;

	n = 0;

	while (n < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		n++;
	}
}
