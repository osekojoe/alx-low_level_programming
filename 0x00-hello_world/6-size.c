#include<stdio.h>
/**
 * main - finds size of various types.
 * Description: Prints the sizes of various types in c both in bit32 and bit64.
 * Return: Returns zero.
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alongalong;
	float afloat;
	/* sizeof evaluates the value of type */
	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongalong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
