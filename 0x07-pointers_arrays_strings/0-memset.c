#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _memset - this function fills the memory
* @s: pointer to the block of memorey to fill
* @b: value to be set
* @n: number of bytes to be set
* Return: returns s
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
