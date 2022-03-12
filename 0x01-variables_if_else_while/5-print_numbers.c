#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Returns 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);

}
