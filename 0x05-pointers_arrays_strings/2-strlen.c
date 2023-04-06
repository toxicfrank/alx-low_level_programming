#include "main.h"
/**
 * _strlen - returns the lenth of a string
 * @s: the string to get the length of
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	length++;
	return (length);

}
