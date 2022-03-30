#include "main.h"

/**
 * past_asterik - iterates past asterisk
 * @s2: the second string, can contain wildcard
 *
 * Return: the pointer past the asterik
 */
char *past_asterik(char *s2)
{
	if (*s2 == '*')
		return (past_asterik(s2 + 1));
	else
		return (s2);
}

/**
 * identical - recursively checks if the strings are identical
 * @s1: the first string
 * @s2: the second string, can contain wildcard
 * Return: 1 if identical, 0 if false
 */
int identical(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		i += wildcmp(s1 + 1, s2 + 1);
	i += identical(s1 + 1, s2);
	return (i);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string, can contain wildcard
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
		int i = 0;

	if (!*s1 && *s2 == '*' && !*past_asterik(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = past_asterik(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			i += wildcmp(s1 + 1, s2 + 1);
		i += identical(s1, s2);
		return (!!i);
	}
	return (0);
}
