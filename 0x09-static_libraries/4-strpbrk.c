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
* _strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: string to be matched
* Return: a pointer to the byte in s that matches one of the bytes in
* accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
