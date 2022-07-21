#include "main.h"

/**
* binary_to_uint - converts binary to int
* @b: to be checked
* Return: the converted value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1, value = 0;
	unsigned int len;
	int i;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			value += j;
		j *= 2;
	}
	return (value);
}
