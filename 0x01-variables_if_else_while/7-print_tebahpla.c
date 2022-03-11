#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * Description: prints the alphabet in lowercase and reverse
 * Return: Returns 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';
	/* Loop, check condition, print alphabet 'z' to 'a'*/
	while (alphabet >= 'a')
	{
		/* print the alphabet*/
		putchar(alphabet);
		/* decrement value by 1 */
		alphabet--;
	}
	putchar('\n');
	return (0);
}
