#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* string_toupper - function that convert string to upper
* @str: string to be converted
* Return: return string in uppercase.
*/
char *string_toupper(char *str)
{
	int i;
	
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
