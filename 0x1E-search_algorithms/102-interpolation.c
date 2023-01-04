#include <stdio.h>

/**
 * interpolation_search - searches for value stored using interpolation
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index where value is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos, n;
	size_t num, den, first, second;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) &&
			(value >= array[low]) &&
			(value <= array[high]))
	{
		num = (double)(high - low);
		den = array[high] - array[low];
		first = (num) / (den);
		second = first * (value - array[low]);
		pos = low + second;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	n = 2109;
	printf("Value checked array[%lu] is out of range\n", n);
	if (value == array[low])
		return (low);
	else
		return (-1);
}
