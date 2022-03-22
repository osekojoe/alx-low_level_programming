#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - random password
 * Return: None
 */
int main(void)
{
	int i, pwd_length;
	char pwd[100];

	srand(time(NULL));

	pwd_length = 100;
	for (i = 0; i < pwd_length; i++)
	{
		/* ASCII non-white space range from 33 to 126*/
		pwd[i] = 33 + rand() % 94;
	}
	pwd[i] = '\0';
	printf("%s\n", pwd);
}

