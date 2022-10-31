#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to number
* @index: bit index
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
