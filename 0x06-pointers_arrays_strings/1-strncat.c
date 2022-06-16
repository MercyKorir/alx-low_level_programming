#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncat - function that concatenates two strings
* @dest: destination string
* @src: source string
* @n: integer to be considered
* Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);

	return (ptr);
}
