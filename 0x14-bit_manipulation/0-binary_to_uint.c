#include "main.h"
/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: points to a string
 * Return: the convert number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	while(*b)
	{
		if (*b == '1')
		{
			x = (x << 1) | 1;
		}
		else if (*b == '0')
		{
			x = x << 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (x);
}