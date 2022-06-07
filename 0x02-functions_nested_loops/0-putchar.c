#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int _putchar(char c);

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

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
