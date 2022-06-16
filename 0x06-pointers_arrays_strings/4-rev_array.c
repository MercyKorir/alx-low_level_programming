#include <stdio.h>
#include "main.h"

/**
* reverse_array - this function reverses an array
* @a: array to be reversed
* @n: number of elements
* Return: void.
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int k;

	k = n / 2;

	for (i = 0; i < k; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
