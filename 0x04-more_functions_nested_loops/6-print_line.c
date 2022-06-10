#include <stdio.h>
#include "main.h"

/**
* print_line - prints a long line
* @n: The number of dsah to print
* Return: void.
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	} else if (n <= 0)
	{
		_putchar('\n');
	}
}
