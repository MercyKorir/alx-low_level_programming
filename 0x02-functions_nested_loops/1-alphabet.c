#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print alphabet - this program prints alphabets in lowercase
 *
 * returns the alphabets followed by a new line
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

