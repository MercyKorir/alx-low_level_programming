#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* print_alphabet_x10 - prints alphabets in lower case ten times
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet_x10(void)
{
	int lower_x;
	int x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			lower_x = tolower(x);
			putchar(lower_x);
		}
		putchar('\n');
	}
}
