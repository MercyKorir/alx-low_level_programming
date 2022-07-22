#include "main.h"

/**
* count_bits - counts number of bits
* @n: number
* Return: the count
*/
int count_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
* flip_bits - flips from one number to another
* @n: first number
* @m: second number
* Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
