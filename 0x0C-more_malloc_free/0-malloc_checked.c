#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - returns pointer
* @b: size of memory
* Return: returns 98 on failure and
* the string on success
*/
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(char) * b);

	if (str == NULL)
	{
		exit(3);
		return (98);
	}
	else
		return (str);
}
