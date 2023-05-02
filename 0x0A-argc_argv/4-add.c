#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: function parameter
 * @argv: function parameter
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
            j++;
		}
        int num = atoi(argv[i]);

        if (num <= 0)
        {
            printf("Error\n");
            return (1);
        }
        sum += num;
	}
    printf("%d\n", sum);
	return (0);

}
