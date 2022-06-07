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
		r = write(1, "+1", 2);
		return (r);
	} else if (n == 0)
	{
		r = write(1, "0", 1);
		return (r);
	} 
	else
	{
		r = write(1, "-1", 2);
		return (r);
	}
	_putchar('\n');
}
