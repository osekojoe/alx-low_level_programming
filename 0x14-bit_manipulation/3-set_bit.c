#include "main.h"

/**
* set_bit - sets bit value at a given index
* @n: pointer to number
* @index: bit index
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*i = (*n | i);

	return (1);
}
