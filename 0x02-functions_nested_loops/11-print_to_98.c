#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: num
 * Return : numbers
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}

