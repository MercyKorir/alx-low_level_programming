#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncpy - this function copies a string
* @dest: destination to be copied to
* @src: source to be copied from
* @n: number of bytes to be copied from src
* Return: returns the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *prt;

	prt = strncpy(dest, src, n);

	return (prt);
}
