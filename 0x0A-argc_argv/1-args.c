#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 * @argc: function parameter
 * @argv: function parameter
 */
int main(int argc, char *argv[])
{
	int i;

	printf("Number of arguments: %d\n", argc);
	printf("Argument values:\n");
	for (i = 0; i < argc; i++)
	{
		printf("%d: %s\n", i, argv[i]);
	}
	return (0);
}
