#include <stdio.h>
#include "main.h"

/**
* factorial - function calculates factorial
* @n: number to be operated on
* Return: -1 if lower than 0
* 1 if equal to 0
* then the factorial if not
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
