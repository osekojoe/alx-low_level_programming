#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: length as int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r, *s;
	unsigned int l1, l2;

	if (s1 == 0) /* if (!s1)*/
		s1 = "";
	if (s2 == 0)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);

	l2 = l2 > n ? n : l2; /* ternary operator*/
	r = s = malloc(l1 + l2 + 1);
	if (!r)
		return (NULL);
	while (*s1)
		*r++ = *s1++;
	while (l2--)
		*r++ = *s2++;
	*r = '\0';
	return (s);
}
