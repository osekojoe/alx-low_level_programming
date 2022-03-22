#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pwd[100];
	int i, j, k;

	k = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pwd[i] = rand() % 78;
		k += (pwd[i] + '0');
		putchar(pwd[i] + '0');
		if ((2772 - k) - '0' < 78)
		{
			j = 2772 - k - '0';
			k += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
