#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - prints the last half of a string
* @str: string to be printed
* Return: void
*/
void puts_half(char *str)
{
	int len;
	int len1;
	int i;
	int n;

	len = strlen(str);
	len1 = len / 2;

	if (len % 2 == 0)
	{
		for (i = len1; i <= len; i++)
		{
			printf("%c", str[i]);
		}
	} else if (!(len % 2 == 0))
	{
		n = (len - 1) / 2;

		for (i = (n + 1); i <= len; i++)
		{
			printf("%c", str[i]);
		}
	}
}
