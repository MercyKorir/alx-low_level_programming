#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcat - this function concatenates two strings
* @dest - is the destination
* @src - is the source
* Return: returns the concatenated string.
*/
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
