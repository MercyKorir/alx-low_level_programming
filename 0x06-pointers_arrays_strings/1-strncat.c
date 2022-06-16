#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncat - function that concatenate two string
* @dest: destination string
* @src: source string
* Return: The dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);

	return (ptr);
