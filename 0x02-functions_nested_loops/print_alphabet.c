#include <stdio.h>
#include <ctype.h>

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

