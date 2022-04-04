#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* The returned pointer should point to a newly allocated space in
* memory which contains the contents of s1, followed by s2, and null
* @s1: string 1
* @s2: string 2
* if NULL is passed, treat it as an empty string
* Return: NULL on failure*
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *s3;

	while (s1 && *s1++)
		len1++;
	while (s2 && *s2++)
		len2++;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == 0)
		return (NULL);
	s3 += len1 + len2;
	*s3 = '\0';
	for (s2--; len2--;)
		*--s3 = *--s2;
	for (s1--; len1--;)
		*--s3 = *--s1;
	return (s3);
}
