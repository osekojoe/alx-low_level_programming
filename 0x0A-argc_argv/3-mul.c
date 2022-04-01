#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: arguments counter
* @argv: array of pointer to the arguments
* Return: 0 if successful, 1 if not
*/
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
