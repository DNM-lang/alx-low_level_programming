#include "main.h"
/**
 * _atoi - converts a sting to an actual integer value.
 *
 * @s: pointer containing the values.
 * Return: the values.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = -1;

	while (*s == ' ' && *s == '\t')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}

