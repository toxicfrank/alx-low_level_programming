#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch == 9)
			putchar(ch + '0');
		else
		{
			putchar(ch + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
