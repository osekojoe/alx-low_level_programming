#include "main.h"
/**
 * jack_bauer - print every minute
 * Description: prints every minute of the day of 24hrs
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0'); /* first digit of hour*/
			_putchar((i % 10) + '0'); /* last digit of hour */
			_putchar(':');
			_putchar((j / 10) + '0'); /* first digit of minute */
			_putchar((j % 10) + '0'); /* last digit of minute */
			_putchar('\n');
			j++;
		}
		i++;
	}
}
