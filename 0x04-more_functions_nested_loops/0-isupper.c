#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - determines whether a letter is uppercase or not
* @c: The character to be checked
* Return: 1 if uppercase. 0 if lowercase.
*/
int _isupper(int c)
{
	int r;

	r = isupper(c);

	if (r)
	{
		return (1);
	} else
		return (0);
	_putchar('\n');
}
