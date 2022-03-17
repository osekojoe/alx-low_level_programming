#include "stdio.h"

/**
 * main - prime numbers
 * Description: Prints prime numbers
 * Return: 0
 */
int main(void)
{
	long int i, prime, n;

	n = 612852475143;
	i = 2; /* smallest prime number*/

	while (i < n && n > 1)
	{
		prime = i;
		if ((n % prime) == 0)
			n = n / prime;
		else
			i++;
	}
	printf("%ld\n", prime);

	return (0);
}
