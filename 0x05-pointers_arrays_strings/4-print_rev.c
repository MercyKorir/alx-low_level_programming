#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - returns a string in reverse order
* @s: the string to be operated on
* Return: void.
*/
void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len; i > 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
