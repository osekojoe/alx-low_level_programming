#include "holberton.h"
#include <stdlib.h>

/**
* copychars - copies chars to buffer
* @b: destination buffer
* @start: starting char pointer
* @stop: ending char pointer
*/
void copychars(char *b, char *start, char *stop)
{
	while (start <= stop)
		*b++ = *start++;
	*b = 0;
}

/**
* wordcount - counts the number of words
* @str: the sentence string
*
* Return: int number of words
*/
int wordcount(char *str)
{
	int words = 0, in_word = 0;

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word != 0) /* if (in_word) */
				words++;
			in_word = 0;
			if (*str == 0) /* if (!*str) */
				break;
		}
		else
			in_word++;
		str++;
	}
	return (words);
}

/**
* strtow - splits a string into words
* @str: string to be split
* Each element of this array should contain a single word, null-terminated
* last element of the returned array should be NULL
* Words are separated by spaces
* Returns NULL if str == NULL or str == ""
* If your function fails, it should return NULL
* Return: a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int words = 0, in_word = 0;
	char **ret, *word_start;

	if (!str || !*str || !wordcount(str))
		return (NULL);
	ret = malloc(sizeof(char *) * (wordcount(str) + 1));
	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word != 0)
			{
				ret[words] = malloc(sizeof(char) * (in_word + 1));
				if (!ret[words])
				{
					return (NULL);
				}
				copychars(ret[words], word_start, str - 1);
				words++;
				in_word = 0;
			}
			if (!*str)
				break;
		}
		else
		{
			if (!in_word++)
				word_start = str;
		}
		str++;
	}
	ret[words] = 0;
	return (ret);
}
