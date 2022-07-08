#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function that operates on elements
* @array: array to be operated on
* @size: size of array
* @action: callback function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
	{
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
