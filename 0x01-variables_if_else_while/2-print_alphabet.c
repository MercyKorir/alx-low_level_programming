#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main()
{
	int lower_x;


	for(int x = 'A'; x <= 'Z'; x++)

	{
		lower_x = tolower(x);
		putchar(lower_x);

		putchar('\n');

	}
	return (0);
}
