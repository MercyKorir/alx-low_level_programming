#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - function that prints individual values of a string
* @str: character to be printed
* Return: void.
*/
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		printf("%c\n", str[i]);
	}
}
