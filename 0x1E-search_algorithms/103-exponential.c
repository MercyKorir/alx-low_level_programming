#include <stdio.h>
#include "search_algos.h"

int binarySearch(int *array, size_t l, size_t r, int x);
/**
 * exponential_search - searches for a value using exponential
 * @array: pointer to array to be searched
 * @size: size of array
 * @value: value to search for
 * Return: index where value is found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, min_val;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (size - 1 > i)
		min_val = i;
	else
		min_val = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min_val);
	return (binarySearch(array, i / 2, min_val, value));
}

/**
 * binarySearch - binary search to use for exponent
 * @array: array to binary search
 * @l: left bound
 * @r: right bound
 * @x: value to search
 * Return: index
 */
int binarySearch(int *array, size_t l, size_t r, int x)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
	if (r >= l)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == x)
			return (mid);
		if (array[mid] > x)
			return (binarySearch(array, l, mid - 1, x));
		return (binarySearch(array, mid + 1, r, x));
	}
	return (-1);
}
