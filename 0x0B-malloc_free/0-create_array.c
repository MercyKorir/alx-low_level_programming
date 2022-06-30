#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array
* @size: size of memory
* @c: character to be put in array
* Return: returns the pointer array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr[0] = c;

			return (ptr);
		}
	}
	free(ptr);
}
