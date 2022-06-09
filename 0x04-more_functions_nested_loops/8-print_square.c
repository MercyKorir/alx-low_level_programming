#include <stdio.h>
#include "main.h"

/**
* print_square - prints out squares of specific sizes
* @size: The size of the square.
* Return: void.
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	} else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++
			}
			_putchar('\n');
		}
	}
}
