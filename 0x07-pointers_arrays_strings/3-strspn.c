#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to string
* @c: character to be located
* Return: pointer to the 1st occurrence of char c in the string s
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
* _strspn - gets the length of a prefix substring
* @s: string segment
* @accept: another string segment
* Return: the number of bytes in the initial segment of s which
* consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		n++;
	}
	return (n);
}
