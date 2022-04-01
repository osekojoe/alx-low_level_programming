#include <stdio.h>
#include <stdlib.h>

/**
* isInteger - checks if number is an integer
* @s: string
* Return: 0 if integer, 1 if not
*/
int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
* main - adds positive numbers
* @argc: arguments counter
* @argv: array of pointer to the arguments
* Return: 0 if successful, 1 if error
*/
int main(int argc, char const *argv[])
{
	int i = 0, n_coins = 0, coin = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (isInteger(argv[1]))
	{
		i = atoi(argv[1]);/*parse the parameter passed to your program*/
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				n_coins++;
			}
			else
			{
				coin++;
			}
		}
	}
	printf("%i\n", n_coins);

	return (0);
}
