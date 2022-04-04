#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* The _strdup() function returns a pointer to a new string which is a
* duplicate of the string str. Memory for the new string is obtained
* with malloc, and can be freed with free.
* Returns NULL if str = NULL
* Return: On success, returns a pointer to the duplicated string.
* NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int size = 0;
	char *str_copy;

	if (str == NULL)
		return (NULL);
	while (*str++)
		size++;
	str_copy = malloc(sizeof(char) * (size + 1));
	if (str_copy == 0)
		return (NULL);
	for (size++; size--;)
		str_copy[size] = *--str;
	return (str_copy);
}
