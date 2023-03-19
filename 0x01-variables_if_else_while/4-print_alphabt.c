#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	return (0);
}
