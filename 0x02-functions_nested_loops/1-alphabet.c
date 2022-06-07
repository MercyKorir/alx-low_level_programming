#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - this program prints alphabets in lowercase
 * void parameter 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
	int lower_x;
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
}

