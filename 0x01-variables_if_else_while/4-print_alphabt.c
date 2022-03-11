#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Description: prints the alphabet (except q,e) in lowercase
 * Return: Returns 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <- 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
