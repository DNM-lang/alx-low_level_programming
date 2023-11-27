#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:pointer to loction of array of 1 and 0s
 * Return: the converted number, or 0 if yhere is 1 or mor strings
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
