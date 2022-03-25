#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: none
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char t;
	int  i, j, k, size_n1, size_n2, a, b, c =  0;

	size_n1 = strlen(n1);
	size_n2 = strlen(n2);

	if (size_n1 > size_r - 1 || size_n2 > size_r - 1)
		return (0);

	for (i = --size_n1, j = --size_n2, k = 0; i >= 0 || j >= 0; k++)
	{
		if (i >= 0)
			a = n1[i--] - 48;
		else
			a = 0;
		if (j >= 0)
			b = n2[j--] - 48;
		else
			b = 0;
		r[k] = (a + b + c) % 10 + 48;
		c = (a + b + c) / 10;
		if (k >= (size_r - 2))
			return (0);
	}
	if (c > 0)
		r[k++] = c + 48;
	r[k] = '\0';
	for (i = 0; i < (k / 2); i++)
	{
		t = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = t;
	}
	return (r);
}
