#include <stdio.h>
#include <stdarg.h>
#include <variadic_functions.h>

/**
* sum_them_all - sums arguments
* @n: the values
* Return: sum is returned
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int i;

	sum = 0;

	va_list ptr;
	va_start(ptr, n);

	if (n == 0)
		retun (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
