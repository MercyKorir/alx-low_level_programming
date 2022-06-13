#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
* password_gen - generates password randomly
* @N: length of password
* Return: void.
*/
void password_gen(int N)
{
	int i;
	int random;

	i = 0;
	random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[];
	char letter[];
	char LETTER[];
	char symbols[];
	char password[N];

	numbers[] = "123456789";
	letter[] = "abcdefghijklmnopqrstuvwxyz";
	LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbols[] = "!@#$^&*?";


	random = rand() % 4;

	for (i = 0; i < N; i++)
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
	int N;

	N = 10;

	password_gen(N);

	return (0);
}
