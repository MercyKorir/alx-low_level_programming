#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcmp - this function compares two strings
* @s1: first string
* @s2: second string
* Return: returns the comparison.
*/
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
