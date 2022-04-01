#include "main.h"
/**
* _strlen - returns the length of a string
* @s: the string
* Return: string length (integer)
*/
int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;

	return (l);
}
