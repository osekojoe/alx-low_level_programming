#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sums all paramaters
 * @n: int, number of undefined arguments
 *
 * Return: sum of args, If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
		;
	va_end(list);

	return (sum);
}
