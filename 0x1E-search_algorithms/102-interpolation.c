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
	size_t low, high, pos, first;
	size_t index, num, den, second;

	low = 0;
	high = size - 1;
	index = -1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		num = (double)(high - low);
		den = array[high] - array[low];
		first = (num) / (den);
		second = first * (value - array[low]);
		pos = low + second;
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			index = pos;
			break;
		}
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (index);
}
