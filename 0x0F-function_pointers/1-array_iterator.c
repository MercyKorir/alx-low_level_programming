#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function iterates an array
* @array: array to be iterated
* @size: size of array
* @action: callback function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
