#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: returns length difference
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (*s1 == *s2)
		return (0);
	}
	return (*s1 - *s2);
}
