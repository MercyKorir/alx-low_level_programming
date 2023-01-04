#include <stdio.h>
#include "search_algos.h"

int binary_recursive(int *array, size_t start, size_t end, int value);
/**
 * advanced_binary - searches for value in array
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * -1 if array is NULL
 * -1 if value is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}

/**
 * binary_recursive - does binary search using recursive method
 * @array: array to search
 * @left: left bound index
 * @right: right bound index
 * @value: value to search
 * Return: index where value is
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
	if (right >= left)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value &&
				(mid == left ||
				 array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (binary_recursive(array, left, mid, value));
		return (binary_recursive(array, mid + 1, right, value));
	}
	return (-1);
}
