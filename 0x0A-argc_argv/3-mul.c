#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: parameter function
 * @argv: parameter function
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}
