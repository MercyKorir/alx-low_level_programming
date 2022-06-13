#include <stdio.h>
#include "main.h"

/**
* swap_int - it swaps the values of two integers
* @a: The first value
* @b: the second integer
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
