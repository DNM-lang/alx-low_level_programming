#include "main.h"
/**
 * _isdigit - function that checks if the c is desimal digit.
 *
 * @c: the value to be checked.
 * Return: 1 if c is digit or 0 if not digit.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
