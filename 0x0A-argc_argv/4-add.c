#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 *
 * @argc: number of arguments
 * @argv: arrays of arguments.
 *
 * Return: 0,1 if false and true respectively
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				num = num * 10 + (argv[i][j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
