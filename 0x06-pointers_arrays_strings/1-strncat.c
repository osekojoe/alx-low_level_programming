#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: desination string
* @src: source string
* @n: number of bytes
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
