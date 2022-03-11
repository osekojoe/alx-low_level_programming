#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Returns 0 (Success)
 */
int main(void)
{
	int alphabet;
	/* Loop for lowercase */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	/* Loop for uppercase */
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
