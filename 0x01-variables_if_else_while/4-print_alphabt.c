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

		if ( x == 'E')
		{

		} else if (x == 'Q')
		{

		} else
		{
			putchar(lower_x);
		}
	}
	putchar('\n');
	return (0);
}
