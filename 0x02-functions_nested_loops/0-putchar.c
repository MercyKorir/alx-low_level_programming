#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 8; i++)
	{
		char c;

		if (i == 1)
		{
			c = '_';

			_putchar(c);
		} else if (i == 2)
		{
			c = 'p';

			_putchar(c);
		} else if (i == 3)
		{
			c = 'u';

			_putchar(c);
		} else if (i == 4)
		{
			c = 't';

			_putchar(c);
		} else if (i == 5)
		{
			c = 'c';

			_putchar(c);
		} else if (i == 6)
		{
			c = 'h';

			_putchar(0);
		} else if (i == 7)
		{
			c = 'a';

			_putchar(c);
		} else if (i == 8)
		{
			c = 'r';

			_putchar(c);
		} else
		{
		}
	}
	write(1, "\n", 1);
	return (0);
}

