#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function prints name
* @name: value to be printed
* @(*f)(char *): callback function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
