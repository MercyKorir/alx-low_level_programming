#include <stdio.h>
#include <math.h>
#include <stdlib>
#include <time.h>

/**
* password_gen - generates password randomly
* @n: length of password
* Return: void.
*/
void password_gen(int n)
{
	int i;
	int random;

	i = 0;
	random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";

	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char symbols[] = "!@#$^&*?";

	char password[n];

	random = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] - numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		} else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		} else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		} else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	printf("\n");
}

/**
* main - Entry point
* Return: always returns 0 on success
*/
int main(void)
{
	int n;

	password_gen(10);

	return (0);
}
