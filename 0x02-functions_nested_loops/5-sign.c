#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* print_sign - prints the sign of the number being evaluated
* @n: The character being checked
* Return: 1 if positive sign, 0 if n is zero and -1 if negative sign.
*/
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = _putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
