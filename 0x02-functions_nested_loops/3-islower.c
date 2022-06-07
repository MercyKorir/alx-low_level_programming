#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"

/**
* _islower - checks whether a character is lowercase or not
* @c: this is the character being checked
* Return: 1 if lowercase and 0 if uppercase.
* On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
	int r;

	r = islower(c);

	if (r)
	{
		return (1);
	} 
	else
		return (0);

	_putchar('\n');
}
