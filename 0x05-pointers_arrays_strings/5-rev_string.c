#include "main.h"
/**
* rev_string - reverses a string
* @s: string to be reversed
* Return: None
*/
void rev_string(char *s)
{
	int i, j, len;
	char s_rev;

	j = 0;
	len = 0;
	while (s[j] != '\0')
		j++;

	len = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		s_rev = s[i];
		s[i] = s[len];
		s[len--] = s_rev;
	}
}
