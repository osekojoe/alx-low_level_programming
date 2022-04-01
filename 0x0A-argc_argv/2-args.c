#include <stdio.h>

/**
* main - prints all arguments it receives.
* @argc: arguments counter
* @argv: array of pointer to the arguments
* Return: 0 if successful, 1 if not
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
