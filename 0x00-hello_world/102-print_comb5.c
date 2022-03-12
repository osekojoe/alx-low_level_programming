#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints double numbers
 * Description: prints all possible different -
 * combinations of 2 two-digit numbers
 * Return: Returns 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			/* check for ascending order condition */
			if (num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 / 10) + 48);
				/* check that highest numbers have been reached */
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
