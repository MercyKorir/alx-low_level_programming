#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"

/**
* _islower - checks whether a character is lowercase or not
* @c: Number to pass to _islower function
*
* Return: 1 if lowercase.
* Return: 0 is otherwise.
* On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
	int r;

	r = islower(c);

	if (r)
	{
		write(1, "1", 1);
	} else
	{
		_putchar(r + '0');
	}
	_putchar('\n');
}
