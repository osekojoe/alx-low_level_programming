#include <stdio.h>

void game(void) __attribute__ ((constructor));

/**
* game - hare vs tortoise
* Return: void
*/
void game(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
