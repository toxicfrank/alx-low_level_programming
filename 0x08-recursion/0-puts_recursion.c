#include "main.h"
/**
 * _puts_recursion - prints a string and a new line
 *
 * @s: parameter function
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
		_putchar(*s);
	_putchar('\n');
}
