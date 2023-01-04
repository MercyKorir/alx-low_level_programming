#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for value using jump
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value
 * -1 if not present
 * -1 if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t x, i = 0;

	while (array[m] <= value && m < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = m;
		m += sqrt(size);
		if (m > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, m);
	for (x = i; x < m; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	printf("Value checked array[%lu] = [%d]\n", x, array[x]);
	return (-1);
}
