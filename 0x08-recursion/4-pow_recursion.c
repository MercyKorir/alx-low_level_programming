#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - does power of two integers
* @x: base integer
* @y: raised to integer
* Return: power or -1 if 
* less than 0
*/
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
