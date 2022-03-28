#include "main.h"

/**
* _memset - fills memory with a constant byte
* The _memset() function fills the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: pointer
* @n: first n bytes of the memory area pointed to by s
* @b: constant byte to be filled
* Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
