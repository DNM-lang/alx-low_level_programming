#include "main.h"
/**
 * _isupper - Function to  check if is character uppercase.
 *
 * @c: the character or string.
 * Return: 1 if upper or 0 when it's lower.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
