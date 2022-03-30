#include "main.h"

/**
 *check - get the natural square root of a number
 *@n: natural number to be rooted
 *@m: natural number to check for root
 *Return: square root
 */
int check(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (check(n, m  + 1));
}

/**
 * _sqrt_recursion - returns the square root of x
 * @n: the number to find natural root
 * Return: the integer result, -1 if error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}
