#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strstr - function locates a substring
* @haystack: string to be scanned
* @needle: character to be found
* Return: the string
*/
char *_strstr(char *haystack, char *needle)
{
	char *str;

	str = strstr(haystack, needle);

	if (str)
	{
		return (str);
	}
}
