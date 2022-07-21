#include "main.h"

/**
* get_bit - gets value of bit at specific pos
* @n: value to be checked
* @index: position
* Return: the value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (-1);
	else
		return ((n >> index) & 1);
}
