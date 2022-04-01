#include <stdio.h>
#include <stdlib.h>

/**
* isInteger - checks if number is an integer
* @s: string
* Return: 0 if integer, 1 if not
*/
int isInteger(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
* main - adds positive numbers
* @argc: arguments counter
* @argv: array of pointer to the arguments
* Return: 0 if successful, 1 if error
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
