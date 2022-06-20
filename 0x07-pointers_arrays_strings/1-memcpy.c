#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _memcpy - this function copies memory area
* @dest: where content is to be copied
* @src: source of data to be copied
* @n: number of bytes to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len;

	len = strlen(src);

	memcpy(dest, src, len + 1);

	return (dest);
}
