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

	if (!(n <= 0))
	{
		while (i < n)
		{
			_putchar('-');
			i++;
		}
		_putchar('\n');
	}
}
