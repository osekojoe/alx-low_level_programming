#include "main.h"
#include <stddef.h>

/**
 * _strlen - finds the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
* recursive_palindrome - recursively checks if a string is a palindrome
* @s: string
* @len: string length
* @i: integer
* Return: 1 if true, 0 if false
*/
int recursive_palindrome(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	if (*(s + i) == *(s + len - i - 1))
		return (recursive_palindrome(s, len, i + 1));
	else
		return (0);
}

/**
* is_palindrome - determines if a string is a palindrome
* @s: string to be checked
* Return: 1 if a string is a palindrome and 0 if not*
*/
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (recursive_palindrome(s, len, 0));
}
