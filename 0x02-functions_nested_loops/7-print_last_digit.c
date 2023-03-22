#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @i: parameter function
 * Return: always m
 */
int print_last_digit(int i)
{
	int m;

	m = i % 10;

	if (i < 0)
		m = -m;
	return (m);
}
