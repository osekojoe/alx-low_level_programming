#include "main.h"
/**
 *  print_last_digit - print last digit
 * Description: prints the last digit of a number.
 * @n: int from which to get last digit
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int z; /* z represents the last digit*/

	if (n < 0)
		n = -n;
	z = n % 10; /* A number when modulo divided by 10 returns its last digit */
	if (z < 0)

		z = -z;

	_putchar(z + '0');

	return (z);
}
