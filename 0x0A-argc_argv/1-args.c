#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 * @argc: function parameter
 * @argv: function parameter
 */
int main(int argc, char *argv[])
{
	(void)argv;/*ignoring the argv parameter*/

	printf("%d\n", argc - 1);
	return (0);
}
