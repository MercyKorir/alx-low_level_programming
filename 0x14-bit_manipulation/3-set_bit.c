#include "main.h"

/**
* set_bit - sets bit at index to 1
* @n: number tobe checked
* @index: position
* Return: 1 on success and
* -1 on fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1UL << index;
	if (*n)
		return (1);
	else
		return (-1);
}
