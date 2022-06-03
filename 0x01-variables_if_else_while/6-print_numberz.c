#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)n*/
int main(void)
{
	void print_int(int value)
	{
		if (value != 0)
		{
			print_int(value/10);
			putchar((value%10) + '0');
		}
	}

	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 0)
		{
			putchar('0');
		} else
		{
			print_int(x);
		}
	}
	write(1, "\n", 1);
	return (0);
}
