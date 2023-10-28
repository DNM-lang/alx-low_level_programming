#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

