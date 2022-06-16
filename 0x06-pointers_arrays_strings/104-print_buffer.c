#include <stdio.h>
#include "main.h"

/**
* print_buffer - this function prints a buffer
* @b: pointer of buffer
* @size: size of buffer
* Return: void.
*/
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
	} else
	{
		printf("%.*s", size, b);
	}
}
