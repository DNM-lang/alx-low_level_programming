#include "main.h"
/**
 * factorial - get the factorial of the number.
 *
 * @n:factor of factorial.
 *
 * Return: factirial integer.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

