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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			printf("%c", str[i]);
		} else if (i % 2 == 0)
		{
			printf("%c", str[i]);
		} else
		{
			continue;
		}
	}
	printf("\n");
}
