#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - checks whether a character is an alphabet or not
* @c: The character to be checked
* Return: 1 if character is alphabet and 0 if not.
*/
int _isalpha(int c)
{
	int r;

	r = isalpha(c);

	if (r)
	{
		return (1);
	}
	else
		return (0);
	putchar('\n');
}
