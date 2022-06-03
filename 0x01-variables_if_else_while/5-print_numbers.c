#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int digit = x % 10;

		printf(\"%d\", digit);
	}
	printf(\"\n\");
	return (0);
}
