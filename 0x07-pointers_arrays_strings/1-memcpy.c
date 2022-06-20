#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _memcpy - function copies memory area
* @dest: destination to be copied to
* @src: source to be copied from
* @n: bytes of memory to be copied
* Return: returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len;

	len = strlen(src);

	memcpy(dest, src, len + 1);

	return (dest);
}
