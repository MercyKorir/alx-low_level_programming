#include <stdio.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of an integer
* @c: The interger to be computed
* Return: the last digit of an integer is printed.
*/
int print_last_digit(int c)
{
	int digit;
	int res;

	digit = c % 10;
	res = _putchar(digit);

	return (res);
}
