#include "main.h"

/**
* get_bit - prints the binary representation of a number
* @n: number
* @index: bit index
* Return: binary value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == o && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
