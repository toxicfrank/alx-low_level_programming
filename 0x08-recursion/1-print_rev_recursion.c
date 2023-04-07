#include "main.h"
/**
 * _print_rev_recursion - prints the string in reverse
 *
 * @s: function parameter
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
