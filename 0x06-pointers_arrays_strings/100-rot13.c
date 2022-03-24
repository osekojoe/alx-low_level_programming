#include "main.h"
/**
* rot13 - encode string to rot13
* @str: string to be encoded
* Return: encoded string
*/
char *rot13(char *str)
{
	int i, j;
	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j];
				break;
			}
		}
	}
	return (str);
}
