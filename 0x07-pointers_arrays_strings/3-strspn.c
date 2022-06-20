#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strspn - function returns length of prefix substring
* @s: string to be scanned
* @accept: string containing characters
* Return: returns the length
*/
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
