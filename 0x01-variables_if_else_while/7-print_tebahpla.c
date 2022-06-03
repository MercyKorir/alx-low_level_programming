#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int lower_x;
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		lower_x = tolower(x);
		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
