#include <stdio.h>
#include "main.h"

/**
* more_numbers - this return numbers from 1 to 14 ten times
* Return: void
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
