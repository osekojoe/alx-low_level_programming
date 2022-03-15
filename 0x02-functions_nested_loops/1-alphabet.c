#include "main.h"
/**
 * print_alphabet - print alphabet
 * Description: prints the alphabet in lowercase
 * Return: always returns 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return;
}
