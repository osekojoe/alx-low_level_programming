#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n: number of elements of the array
* Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
