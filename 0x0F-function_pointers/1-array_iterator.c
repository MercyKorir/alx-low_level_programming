#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - iterates an array
* @array: array to be iterated
* @size: size of array
* @action: callback function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
