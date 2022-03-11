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
	char alphabet = 'a';
	/* Loop, check condition, print alphabet 'a' to 'z'*/
	while (alphabet <= 'z')
	{
		/* print the alphabet*/
		putchar(alphabet);
		/* increment value by 1 */
		alphabet++;
	}
	return (0);
}
