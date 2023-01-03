#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function searches for a value
 * in an array using linear search
 * @array: array to be checked
 * @size: size of array
 * @value: Value to be searched
 * Return: returns index if found
 * returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
	}
	if (i == size)
		return (-1);
	return (i);

}
