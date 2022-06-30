#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns a pointer to an allocated
* space in memory
* @str: string to be copied
* Return: returns the pointer
*/
char *_strdup(char *str)
{
	char *copystr;

	copystr = malloc(sizeof(str) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		copystr = strdup(str);

		return (copystr);
	}
}
