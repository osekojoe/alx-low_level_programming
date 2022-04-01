#include "main.h"
/**
 * _isalpha - checks for alphabet
 * Description: checks for alphabet letter
 * @c: character to be checked
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
