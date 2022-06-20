#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strpbrk - function searches a string for set of bytes
* @s: string to be scanned
* @accept: string whose bytes are checked
* Return: returns pointer str
*/
char *_strpbrk(char *s, char *accept)
{
	char *str;

	str = strpbrk(s, accept);

	return (str);
}
