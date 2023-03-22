#include "main.h"
/**
 * _isalpha - prints out alphabet
 * @c: prints character
 *
 * Return: always 0
 * otherwise return 1
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
