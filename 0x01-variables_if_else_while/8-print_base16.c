#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers
 * Description: prints all numbers of base 16
 * Return: Returns 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
