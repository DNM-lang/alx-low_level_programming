#include "main.h"
/**
 * _pow_recursion - dunction to show the power.
 *
 * @x: first number.
 * @y: power of the number x
 *
 * Return: the results.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
