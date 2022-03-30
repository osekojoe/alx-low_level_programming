#include "main.h"

/**
 * check - is the number prime?
 * @n: integer
 * @m: integer
 * Return: 1 if prime, 0 if not
 */

int check(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (check(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - check if a number is prime
 * @n: integer to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (!(n % 2) || n < 2)
		return (0);
	return (check(n, 3));
}
