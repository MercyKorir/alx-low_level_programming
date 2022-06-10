#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints a trangle of size
* @size: The size of triangle
* Return: void
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else if (size <= 0)
	{
		_putchar('\n');
	}
}
