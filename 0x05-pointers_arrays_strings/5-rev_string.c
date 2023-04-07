#include "main.h"

/**
 * rev_string - Revers a string
 * @s: the string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int r = 0;
	int i;

	while (s[r] != '\0')
	{
		r++;
	}
	for (i = 0; i < r; i++)
	{
		r--;
		rev = s[i];
		s[i] = s[r];
		s[r] = rev;
	}
}
