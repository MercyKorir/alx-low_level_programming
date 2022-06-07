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

		} else if (i == 2)
		{
			c = 'p';
			
		} else if (i == 3)
		{
			c = 'u';
			
		} else if (i == 4)
		{
			c = 't';
			
		} else if (i == 5)
		{
			c = 'c';
			
		} else if (i == 6)
		{
			c = 'h';
			
		} else if (i == 7)
		{
			c = 'a';
			
		} else if (i == 8)
		{
			c = 'r';
			
		} else
		{
		}
		
	}
	write(1, "\n", 1);
	return (0);
}

