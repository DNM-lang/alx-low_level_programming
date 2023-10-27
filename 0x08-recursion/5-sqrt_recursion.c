#include "main.h"
/**
 * sqrt_a - return the natural square root.
 * @n: input number
 * @c: iterator.
 *
 * Return: square root or -1
 */

int sqrt_a(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > 4)
	{
		return (-1);
	}
	return (sqrt_a(n, c + 1));
}
/**
 * _ sqrt_recursion - calculates the square root of a number
 *
 * @n: number to get the square root.
 *
 * Return: the results.
 */
int _sqrt_recursion(int n)
{
	return(sqrt_a(n, 0));
}
