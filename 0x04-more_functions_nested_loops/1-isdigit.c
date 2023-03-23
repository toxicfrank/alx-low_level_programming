#include "main.h"
/**
 * _isdigit - prints digit
 *
 *  @c: function parameter
 *  Return: 1 when its a digit
 *  otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
