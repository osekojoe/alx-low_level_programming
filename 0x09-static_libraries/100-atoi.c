#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted
 */
int _atoi(char *s)
{
	int i, j, k, m, len, num;

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	len = 0;
	num = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && j == 0)
	{
		if (s[i] == '-')
			++k;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (k % 2)
				num = -num;
			m = m * 10 + num;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);

	return (m);
}
