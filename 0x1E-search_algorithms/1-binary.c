#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array
 * @array: array to search
 * @size: size of array
 * @value: value to look for
 * Return: index it is located
 * return -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
