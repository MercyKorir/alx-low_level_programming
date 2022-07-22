#include "main.h"

/**
* clear_bit - sets value of bit to 0
* @n: value
* @index: position
* Return: 1 on success -1 failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);
	if (*n)
		return (1);
	else
		return (-1);
}
