#include <stdio.h>

/**
 *  main - sum of multiples
 * Description: computes the and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum_of_3, sum_of_5, sum;
	int i;

	sum_of_3 = 0;
	sum_of_5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum_of_3 = sum_of_3 + i;
		} else if ((i % 5) == 0)
		{
			sum_of_3 = sum_of_5 + i;
		}
	}
	sum = sum_of_3 + sum_of_5;
	printf("%lu\n", sum);
	return (0);
}
