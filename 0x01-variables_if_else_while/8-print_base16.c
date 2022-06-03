#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	int x;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (x = 'A'; x <= 'F'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
