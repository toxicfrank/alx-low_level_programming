#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar(ch + '0');
	putchar('\n');
	return (0);
}
