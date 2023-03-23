#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Returns: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
