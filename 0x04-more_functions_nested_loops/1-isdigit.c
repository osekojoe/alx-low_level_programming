#include "main.h"
/**
 * _isdigit - check for digit
 * Description: checks for a digit (0 through 9)
 * @c: digit to be checked
 * Return: always returns 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
