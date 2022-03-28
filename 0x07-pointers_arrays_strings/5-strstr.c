#include "main.h"
#include <stddef.h>

/**
* _strstr - locates a substring.
* The _strstr() function finds the first occurrence of the substring
* needle in the string haystack.
* The terminating null bytes (\0) are not compared
* @haystack: main string
* @needle: sub-string to be searched
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
