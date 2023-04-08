#include "main.h"
#include <math.h>
/**
 * _pow_recursion - gives the power of a number
 *
 * @x: parameter function
 * @y: parameter function
 * Return: the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
