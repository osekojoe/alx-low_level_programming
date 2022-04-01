#include <stdio.h>

/**
* main - a program that prints the number of arguments passed into it
* @argc: arguments counter
* @argv: array of pointer to the arguments
* Return: 0 if successful, 1 if not
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int n, big;

	for (n = 0; n < argc; n++)
	{
		if (big < n)
		{
			big = n;
		}
	}
	printf("%d\n", big);
	return (0);
}
