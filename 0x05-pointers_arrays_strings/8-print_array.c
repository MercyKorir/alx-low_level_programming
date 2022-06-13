#include <stdio.h>
#include "main.h"

/**
* print_array - prints the elements of an array
* @a: is the array
* @n: number of elements to be printed
* Return: void.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	for (i = (n - 1); i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
