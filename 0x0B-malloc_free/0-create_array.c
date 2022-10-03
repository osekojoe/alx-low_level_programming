#include "holberton.h"

#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of array
* @c: char to initialize
* Returns NULL if size = 0
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *m = malloc(sizeof(char) * size);

	if (size == 0 || m == NULL)
		return (NULL);
	while (size--)//run loop until size == 0
	{
		m[size] = c;
	}
	return (m);
}
