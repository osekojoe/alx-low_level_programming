#include "holberton.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: argument count
* @av: argument array
* Returns NULL if ac == 0 or av == NULL
* Each argument should be followed by a \n in the new string
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac < 1 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	len += ac + 1;
	str = malloc(sizeof(char) * len);
	if (!str) /* if (str == 0)*/
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
