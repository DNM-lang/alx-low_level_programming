#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: num
 * Return : numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

