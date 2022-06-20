#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: this is the string
* @c: this is the character to be located
* Return: the character and string following
*/
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);

	return (ptr);
}
