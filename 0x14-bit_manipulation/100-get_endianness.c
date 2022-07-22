#include "main.h"

/**
* get_endianness - checks if big or little endian
* Return: 0 if big 1 if little
*/
int get_endianness(void)
{
	int n;
	char *c = (char *) &n;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
