#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - computes square root of a number
* @n: number to be computed
* Return: returns squareroot
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (_sqrt_recursion(n));
}
