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
		char a;

		if (i == 1)
		{
			a = '_';

		} else if (i == 2)
		{
			a = 'p';
			
		} else if (i == 3)
		{
			a = 'u';
			
		} else if (i == 4)
		{
			a = 't';
			
		} else if (i == 5)
		{
			a = 'c';
			
		} else if (i == 6)
		{
			a = 'h';
			
		} else if (i == 7)
		{
			a = 'a';
			
		} else if (i == 8)
		{
			a = 'r';
			
		} else
		{
		}
		result = _putchar(a);
	}
	write(1, "\n", 1);
	return (0);
}

