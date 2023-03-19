#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int sh;

	for (ch = 0; ch < 10; ch++)
		putchar(ch + '0');
	for (sh = 'a'; sh <= 'f'; sh++)
		putchar(sh);
	putchar('\n');

	return (0);
}
