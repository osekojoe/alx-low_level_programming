#include <stdio.h>

/**
* main - prints a program's name, followed by a new line
* @argc: argument counter
* @argv: array of pointers to program arguments
* Return: 0 succesful, 1 unsuccesful
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
