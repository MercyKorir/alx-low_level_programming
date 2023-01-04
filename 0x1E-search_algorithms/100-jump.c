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
	size_t step, prev, res_min;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	prev = 0;
	if (size > step)
		res_min = step;
	else
		res_min = size;
	while (array[res_min - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev == res_min)
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
