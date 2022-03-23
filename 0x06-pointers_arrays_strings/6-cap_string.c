#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string to be capitalized
* Return: capitalized string
*/
char *cap_string(char *str)
{
	int i, j;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			continue;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j])
			{
				/*i++;*/
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
