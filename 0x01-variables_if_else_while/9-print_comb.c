#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Returns 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
