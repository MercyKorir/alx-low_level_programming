#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isdigit - returns if a character is a digit or not
* @c: The character to be checked
* Return: 1 if character is a digit. 0 if charcter is not.
*/
int _isdigit(int c)
{
	int r;

	r = isdigit(c);

	if (r)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
