#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - function finds length of a string
* @s: string to be checked
* Return: returns length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
