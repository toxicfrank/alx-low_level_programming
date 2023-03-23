#include "main.h"
/**
 * print_line - prints a straight line
 *
 * @n: parameter function
 * Return: int
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 && n < 0)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
