#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - returns index of array elem
* @array: array to be checked
* @size: size of array
* @cmp: callback function
* Return: index of array elem is returned
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (((*cmp)(array[i])) != 0)
			return (i);
		if (i == size)
			return (-1);
	}
}
