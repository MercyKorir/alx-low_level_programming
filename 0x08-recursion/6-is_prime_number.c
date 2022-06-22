#include <stdio.h>
#include "main.h"

/**
* is_prime_number - returns a prime number
* @n: integer to be checked
* Return: returns 1 if prime
* 0 if not prime
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (1);
}
