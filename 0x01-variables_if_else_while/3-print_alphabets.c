#include <stdio.h>
#include <ctype.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		int upper_x = toupper(x);

		putchar(upper_x);
	}
	putchar('\n');
	return (0);
}
