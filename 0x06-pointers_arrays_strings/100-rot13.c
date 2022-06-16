#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rot13 - this function encodes a string using rot13
* @str: the string to be encoded
* Return: returns the encoded string.
*/
char *rot13(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((*(str + i) >= 'a' && *(str + i) < 'n') || (*(str + i) >= 'A' && *(str + i) < 'N'))
		{
			*(str + i) += 13;
		} else if ((*(str + i) > 'm' && *(str + i) < 'z') || (*(str + i) > 'M' && *(str + i) < 'Z'))
		{
			*(str + i) -= 13;
		}
	}
	return (str);
}
