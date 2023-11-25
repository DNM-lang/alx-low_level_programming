#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n:num
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
