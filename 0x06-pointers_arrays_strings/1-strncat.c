#include "main.h"
/**
 * _strncat - concatnates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: number of charcters to be append
 * Return: concatnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
