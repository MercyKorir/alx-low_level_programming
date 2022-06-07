#include <stdio.h>
#include "main.h"

/**
* print_sign - prints the sign of the number being evaluated
* @n: The character being checked
* Return: 1 if positive sign, 0 if n is zero and -1 if negative sign.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	} else if (n == 0)
	{
		return (0);
	} 
	else
		return (-1);
	_putchar('\n');
}
