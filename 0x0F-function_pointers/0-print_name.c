#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints the name
 * @name: function parameter
 * @f: function parameter
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
